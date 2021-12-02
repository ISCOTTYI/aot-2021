#include <iostream>
#include <string>
#include <fstream>
#include <vector>

class Solution {
public:
    int part1(std::vector<std::string> v) {
        return 0;
    }

    int part2(std::vector<std::string> v) {
        return 0;
    }
};

// https://stackoverflow.com/questions/13035674/how-to-read-a-file-line-by-line-or-a-whole-text-file-at-once
std::vector<std::string> read_input(std::string file_name) {
    std::vector<std::string> v;
    std::ifstream file(file_name);
    std::string str;
    while (std::getline(file, str)) {
        v.push_back(str);
    }
    return v;
}

int main() {
    std::vector<std::string> v = read_input("input.txt");

    Solution s;
    std::cout << s.part1(v) << std::endl;
    std::cout << s.part2(v) << std::endl;
    return 0;
}

