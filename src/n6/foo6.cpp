#include "foo6.h"

std::pair<int, int> find_min_idx(const std::string &input_string, std::vector <std::pair<char, int>> &tmp) {
    for (int i = 0; i < (int)input_string.size(); i++) {
        for (int j = 0; j < (int)input_string.size(); j++) {
            if (tmp[j].first < input_string[i] && !(i == 0 && tmp[j].first == '0')) {
                int tmp_tmp = tmp[j].first;
                while (j + 1 < (int)input_string.size() && tmp[j + 1].first == tmp_tmp) {
                    j++;
                }
                return std::make_pair(i, j);
            }
        }
    }
    return std::make_pair(-1, -1);
}

std::pair<int, int> find_max_idx(const std::string &input_string, const std::vector <std::pair<char, int>> &tmp) {
    for (int i = 0, j = input_string.size() - 1; i < (int)input_string.size(); i++, j--) {
        if (input_string[i] != tmp[j].first) {
            int tmp_tmp = tmp[j].first;
            while (j + 1 < (int)input_string.size() && tmp[j + 1].first == tmp_tmp) {
                j++;
            }
            return std::make_pair(i, j);
        }
    }
    return std::make_pair(-1, -1);
}

std::pair<std::string, std::string> foo(std::string &input_string) {
    std::vector <std::pair<char, int>> tmp;                       
    int i = 0;                                                      
    for (char c : input_string) {
        tmp.push_back(std::make_pair(c, i++));
    }
    std::sort(tmp.begin(), tmp.end());
    std::string min = input_string, max = input_string;
    std::pair<int, int> res = find_min_idx(input_string, tmp);
    if (res.first != -1) {
        std::swap(min[res.first], min[tmp[res.second].second]);
    }
    res = find_max_idx(input_string, tmp);
    if (res.first != -1) {
        std::swap(max[res.first], max[tmp[res.second].second]);
    }
    return std::pair<std::string, std::string> (min, max);
}