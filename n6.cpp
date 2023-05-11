#include <iostream>
#include <string>

std::pair<std::string, std::string> foo(std::string &input_string) {//решение работает за О(n) - линейная сложность
    int min_idx = 0, max_idx = 0;
    for (int i = 1; i < input_string.size(); i++) {
        if (input_string[min_idx] >= input_string[i] && input_string[i] != '0') {
            min_idx = i;
        }
        if (input_string[max_idx] <= input_string[i] && input_string[i] != '0') {
            max_idx = i;
        }
    }
    std::string first(input_string);
    std::string second(input_string);
    std::swap(first[0], first[min_idx]);
    std::swap(second[0], second[max_idx]);
    return std::pair<std::string, std::string> (first, second);
}

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
    if (test()) {
        int n;
        std::cin >> n;
        for (int i = 0; i < n; i++) {
            std::string input_string;
            std::cin >> input_string;
            std::pair<std::string, std::string> result = foo(input_string);
            std::cout << result.first << " " << result.second << " ";
        }
    }
}