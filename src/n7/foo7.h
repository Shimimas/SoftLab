#pragma once

#include <algorithm>
#include <string>
#include <iostream>
#include <set>
#include <vector>
#include <fstream>

int foo(const std::set <std::string> &words, std::string s); // решение работает за О(n * log(n))

/*решение работает за О(n * log(n)) потому что сначала выполняется сортировка, после чего цикл основанный на std::next_permutation
трудоемкость этой функции О(n)*/