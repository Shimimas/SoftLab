#include "foo8.h"

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