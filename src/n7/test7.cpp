#include "foo7.h"

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
    return 0;
}