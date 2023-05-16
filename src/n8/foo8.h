#pragma once

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

/*решение выполненно на основе DFS, соотвестсвенно его трудоемкость совпадает с трудоемкостью DFS, т.е. O(V+E) где 
    V — множество вершин графа, 
    E — множество ребер графа.*/