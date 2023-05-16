#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>

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
    if (graph.count(way[0]) && graph[way[0]].count(way[2])) {
        result = true;
    } else if (graph.count(way[2]) && graph[way[2]].count(way[0])) {
        result = true;
    } else {
        graph[way[0]].insert(way[2]);
        graph[way[2]].insert(way[0]);
    }
}

void Graph::DFS() {
    char vertex = graph.begin()->first;
    DFS(vertex, vertex);
}

void Graph::DFS(char vertex, char last) {
    visited.insert(vertex);
    for (auto it = graph[vertex].begin(); it != graph[vertex].end(); it++) {
        if (!visited.count(*it)) {
            DFS(*it, vertex);
        } else if (*it != last) {
            result = true;
        }
    }
}

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