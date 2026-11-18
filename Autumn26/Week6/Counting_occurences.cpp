#include <iostream>
#include <fstream>
#include <vector>
#include <string>

int countOccurrences(std::vector<std::string>& text, std::string target) {
    int z = 0;

    for (int i = 0; i < text.size(); i++) {
        if (text[i] == target) {
            z++;
        }
    }

    return z;
}

int main() {
    std::vector<std::string> input;
    std::vector<std::string> target;
    std::ifstream infile;
    infile.open("Words.txt");

    if (infile.is_open()) {
        std::string word;
        while (infile >> word) {
            target.push_back(word);
        }
        infile.close();
    }
    else {
        std::cout << "error opening Words.txt" << std::endl;
        return 1;
    }

    infile.open("Input.txt");

    if (infile.is_open()) {
        std::string word;
        while (infile >> word) {
            input.push_back(word);
        }
        infile.close();
    }
    else {
        std::cout << "error opening input.txt" << std::endl;
        return 1;
    }
    
    for (int i = 0; i < target.size(); i++) {
    std::cout << target[i] << ": "
              << countOccurrences(input, target[i]) << std::endl;
}
}