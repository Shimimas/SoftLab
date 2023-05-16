#include "foo6.h"

int main() {
    int n;
    std::vector <std::pair<std::string, std::string>> res_vector;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::string input_string;
        std::cin >> input_string;
        std::pair<std::string, std::string> result = foo(input_string);
        res_vector.push_back(result);
    }
    for (auto s : res_vector) {
        std::cout << s.first << " " << s.second << " ";
    }
    return 0;
}