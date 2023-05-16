#include "foo8.h"

int main() {
    int n;
    std::cin >> n;
    std::vector<bool> res_vector;
    for (int i = 0; i < n; i++) {
        int m;
        std::cin >> m;
        Graph graph;
        for (int j = 0; j < m; j++) {
            std::string way;
            std::cin >> way;
            graph.addEdge(way);
        }
        res_vector.push_back(graph.Answer());
    }
    for (bool b : res_vector) {
        std::cout << b << " ";
    }
}