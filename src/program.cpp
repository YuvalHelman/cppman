#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <functional>

#include <program.hpp>

int process_lines_in_file(const std::string& input_path) {
    std::cout << "here";
    auto x = 5;
    std::cout << x << std::endl;
    std::vector<std::vector<char>> m;
    // open the file
    std::ifstream infile(input_path);
    std::string line;
    while(std::getline(infile, line)) {
        std::vector<char> l;
        for (auto c: line) {
            l.push_back(c);
        }
        m.push_back(l);
    }

    for (auto i: m[0])
        std::cout << i << ' ';

    // Keep copy of prev map
    auto m_old = m ;



    return 0;
}

int main()
{
    std::cout << "Hello World" << std::endl;
    return process_lines_in_file("input");
}

