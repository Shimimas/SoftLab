#include <algorithm>
#include <string>
#include <iostream>
#include <set>
#include <fstream>

int foo(const std::set <std::string> &words, std::string s) { // решение работает за О(n * log(n))
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

void test(const std::set <std::string> &words) {
    int res = foo(words, "bat");
    if (res == 1) {
        std::cout << "OK" << std::endl;
    } else {
        std::cout << "WRONG ANSWER" << std::endl;
        std::cout << "ANSWER " << res << std::endl;
        std::cout << "NEED 1" << std::endl;
        res = false;
    }
    res = foo(words, "coal");
    if (res == 1) {
        std::cout << "OK" << std::endl;
    } else {
        std::cout << "WRONG ANSWER" << std::endl;
        std::cout << "ANSWER " << res << std::endl;
        std::cout << "NEED 1" << std::endl;
        res = false;
    }
    res = foo(words, "lots");
    if (res == 2) {
        std::cout << "OK" << std::endl;
    } else {
        std::cout << "WRONG ANSWER" << std::endl;
        std::cout << "ANSWER " << res << std::endl;
        std::cout << "NEED 2" << std::endl;
        res = false;
    }
}

int main()
{   
    std::set<std::string> words;
    std::ifstream file("words.txt");
    std::string line;
    while (std::getline(file, line)) {
        words.insert(line);
    }
    test(words);
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::string s;
        std::cin >> s;
        std::cout << foo(words, s) << " ";
    }
}