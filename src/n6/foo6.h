#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::pair<int, int> find_min_idx(const std::string &input_string, std::vector <std::pair<char, int>> &tmp);
std::pair<int, int> find_max_idx(const std::string &input_string, const std::vector <std::pair<char, int>> &tmp);
std::pair<std::string, std::string> foo(std::string &input_string);

/*решение работает за О(n^2) - квадратичная сложность, решение за n^2 подходит из за низкого лимита входных данных (30)*/