#include "foo7.h"

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