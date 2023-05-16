#include "foo9.h"

int main()
{   
    Words w;
    int n;
    std::cin >> n;
    std::vector<int> res_vector;
    for (int i = 0; i < n; i++) {
        std::string s, e;
        std::cin >> s >> e;
        w.ChangeVertex(s, e);
        res_vector.push_back(w.Answer());
    }
    for (int c : res_vector) {
        std::cout << c << " ";
    }
}