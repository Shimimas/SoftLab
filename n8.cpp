#include <iostream>
#include <map>
#include <set>
#include <string>

class Graph {
    private:
        std::map <char, std::set <char>> graph;
        std::set <char> visited;
        bool result = false;

        void DFS(char vertex, char last);

    public:
        Graph() {};
        bool Answer() {
            DFS();
            return result;
        }
        void addEdge(const std::string &way);
        void DFS();
};

void Graph::addEdge(const std::string &way) {
    graph[way[0]].insert(way[2]);
    graph[way[2]].insert(way[0]);
}

void Graph::DFS() {
    char vertex = graph.begin()->first;
    DFS(vertex, vertex);
}

void Graph::DFS(char vertex, char last) { //работает за O(n)
    visited.insert(vertex);
    for (auto it = graph[vertex].begin(); it != graph[vertex].end(); it++) {
        if (!visited.count(*it)) {
            DFS(*it, vertex);
        } else if (*it != last) {
            result = true;
        }
    }
}

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
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int m;
        std::cin >> m;
        Graph graph;
        for (int j = 0; j < m; j++) {
            std::string way;
            std::cin >> way;
            graph.addEdge(way);
        }
        std::cout << graph.Answer() << " ";
    }
}