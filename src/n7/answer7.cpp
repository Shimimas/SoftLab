#include <algorithm>
#include <string>
#include <iostream>
#include <set>
#include <vector>
#include <fstream>

int foo(const std::set <std::string> &words, std::string s) {
    std::string s_tmp = s;
    int counter = 0;
    std::sort(s.begin(), s.end());
    do {
        if (words.count(s) && s_tmp != s) {
            counter++;
        }
    } while(std::next_permutation(s.begin(), s.end()));
    return counter;
}

int main()
{   
    std::set<std::string> words;
    std::ifstream file("words.txt");
    std::string line;
    while (std::getline(file, line)) {
        words.insert(line);
    }
    std::vector<int> res_vector;
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::string s;
        std::cin >> s;
        res_vector.push_back(foo(words, s));
    }
    for (int c : res_vector) {
        std::cout << c << " ";
    }
}