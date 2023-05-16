#pragma once

#include <algorithm>
#include <string>
#include <iostream>
#include <set>
#include <fstream>
#include <vector>
#include <map>
#include <queue>

class Words {
    private:
        std::string start; 
        std::string end;
        std::set <std::string> words;
        std::map <std::string, std::set <std::string>> words_map;

        void create_map();
    public:
        Words() {
            std::ifstream file("words.txt");
            std::string line;
            while (std::getline(file, line)) {
                words.insert(line);
            }
            create_map();
        }
        void ChangeVertex(std::string s, std::string e) {
            start = s;
            end = e;
        }
        int Answer();
};

/*выполнение программы можно условно разбить на 2 составляющие части - это:
    - составление графа, на основе std::map. Трудоемкость большая, но константная, также граф генерируется только при инициализации объекта класса.
    - поиск кратчайшего пути от вершины начала, которой соответствует начальное слово, до вершины конца соответственно, функция работает за N(V + E), 
      но, так как она зависит только от размеров граффа, а они являются константой, и от входных параметров не зависят, функция также будет работать за константное время */