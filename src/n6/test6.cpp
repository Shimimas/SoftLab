#include "foo6.h"

bool test() {
    bool res = true;
    std::string input_string = "302A";
    std::pair<std::string, std::string> result = foo(input_string);
    if (result.first == "203A" && result.second == "A023") {
        std::cout << "OK" << std::endl;
    } else {
        std::cout << "WRONG ANSWER" << std::endl;
        std::cout << "ANSWER " << result.first << " " << result.second << std::endl;
        std::cout << "NEED 203A A023" << std::endl;
        res = false;
    }
    input_string = "31415926";
    result = foo(input_string);
    if (result.first == "11435926" && result.second == "91415326") {
        std::cout << "OK" << std::endl;
    } else {
        std::cout << "WRONG ANSWER" << std::endl;
        std::cout << "ANSWER " << result.first << " " << result.second << std::endl;
        std::cout << "NEED 11435926 91415326" << std::endl;
        res = false;
    }
    input_string = "10";
    result = foo(input_string);
    if (result.first == "10" && result.second == "10") {
        std::cout << "OK" << std::endl;
    } else {
        std::cout << "WRONG ANSWER" << std::endl;
        std::cout << "ANSWER " << result.first << " " << result.second << std::endl;
        std::cout << "NEED 10 10" << std::endl;
        res = false;
    }
    return res;
}

int main() {
    test();
    return 0;
}