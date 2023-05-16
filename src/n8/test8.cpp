#include "foo8.h"

void test() {
    Graph graph1, graph2, graph3;
    graph1.addEdge("A-B");
    graph1.addEdge("B-C");
    graph1.addEdge("B-D");
    bool res = graph1.Answer();
    if (!res) {
        std::cout << "OK" << std::endl;
    } else {
        std::cout << "WRONG ANSWER " << res << std::endl;
        std::cout << "EXPECTED 0" << std::endl;
    }
    graph2.addEdge("A-B");
    graph2.addEdge("B-D");
    graph2.addEdge("D-C");
    graph2.addEdge("A-C");
    res = graph2.Answer();
    if (res) {
        std::cout << "OK" << std::endl;
    } else {
        std::cout << "WRONG ANSWER " << res << std::endl;
        std::cout << "EXPECTED 1" << std::endl;
    }
    graph3.addEdge("A-B");
    graph3.addEdge("B-C");
    graph3.addEdge("C-A");
    graph3.addEdge("A-D");
    res = graph3.Answer();
    if (res) {
        std::cout << "OK" << std::endl;
    } else {
        std::cout << "WRONG ANSWER " << res << std::endl;
        std::cout << "EXPECTED 1" << std::endl;
    }
}

int main() {
    test();
    return 0;
}