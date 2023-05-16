#include "foo9.h"

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