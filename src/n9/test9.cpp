#include "foo9.h"

void test(Words &words) {
    words.ChangeVertex("girls", "women");
    int res = words.Answer();
    if (res == 9) {
        std::cout << "OK" << std::endl;
    } else {
        std::cout << "WRONG ANSWER" << std::endl;
        std::cout << "EXPECTED 9 ANSWER " << res << std::endl;
    }
    words.ChangeVertex("mayor", "clown");
    res = words.Answer();
    if (res == 14) {
        std::cout << "OK" << std::endl;
    } else {
        std::cout << "WRONG ANSWER" << std::endl;
        std::cout << "EXPECTED 14 ANSWER " << res << std::endl;
    }
}

int main()
{   
    Words w;
    test(w);
}