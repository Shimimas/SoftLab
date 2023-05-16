#include <algorithm>
#include <string>
#include <iostream>
#include <set>
#include <fstream>
#include <vector>
#include <map>
#include <queue>

class Words {
    private:
        std::string start; 
        std::string end;
        std::set <std::string> words;
        std::map <std::string, std::set <std::string>> words_map;

        void create_map();
    public:
        Words() {
            std::ifstream file("words.txt");
            std::string line;
            while (std::getline(file, line)) {
                words.insert(line);
            }
            create_map();
        }
        void ChangeVertex(std::string s, std::string e) {
            start = s;
            end = e;
        }
        int Answer();
};

void Words::create_map() {
    for (auto w : words) {
        if (w.size() == 5) {
            for (auto v : words) {
                if (v.size() == 5) {
                    for (int i = 0; i < (int)w.size(); i++) {
                        char tmp = w[i];
                        w[i] = v[i];
                        if (w == v) {
                            w[i] = tmp;
                            words_map[w].insert(v);
                        }
                        w[i] = tmp;
                    }
                }
            }
        }
    }
}

int Words::Answer() {
    std::queue <std::string> q;
    q.push(start);
    std::set <std::string> used;
    used.insert(start);
    std::map <std::string, int> d;
    while (!q.empty()) {
        std::string v = q.front();
        q.pop();
        for (auto it = words_map[v].begin(); it != words_map[v].end(); it++) {
            std::string to = *it;
            if (!used.count(to)) {
                used.insert(to);
                q.push(to);
                if (!d.count(to)) {
                    d[to] = 0;
                }
                d[to] = d[v] + 1;
            }
        }
    }
    return d[end] + 1;
}

int main()
{   
    Words w;
    int n;
    std::cin >> n;
    std::vector<int> res_vector;
    for (int i = 0; i < n; i++) {
        std::string s, e;
        std::cin >> s >> e;
        w.ChangeVertex(s, e);
        res_vector.push_back(w.Answer());
    }
    for (int c : res_vector) {
        std::cout << c << " ";
    }
}