#include "foo7.h"

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