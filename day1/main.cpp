#include <iostream>
#include <string>
#include <fstream>
#include <vector>

class Solution {
public:
    int part1(std::vector<std::string> v) {
        int cnt = 0;
        int last = std::stoi(v[0]);
        typedef std::vector<std::string>::size_type st;
        for (st i = 0; i < v.size(); i++) {
            int curr = std::stoi(v[i]);
            if (curr > last) {
                cnt++;
            }
            last = curr;
        }
        return cnt;
    }

    int part2(std::vector<std::string> v) {
        int cnt = 0;
        int last = std::stoi(v[0]) + std::stoi(v[1]) + std::stoi(v[2]);
        typedef std::vector<std::string>::size_type st;
        for (st i = 0; i < v.size() - 2; i++) {
            int curr = std::stoi(v[i]) + std::stoi(v[i + 1]) + std::stoi(v[i + 2]);
            if (curr > last) {
                cnt++;
            }
            last = curr;
        }
        return cnt;
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

