#include <iostream>
#include <fstream>
#include <string>

int main() {
    int pos, pos2;
    std::ifstream file("Subject.txt");
    
    // Check if file opened successfully
    if (!file.is_open()) {
        std::cerr << "Error: Could not open Subject.txt" << std::endl;
        return 1;
    }
    
    std::string line;
    while (std::getline(file, line)) {
        std::cout << line << std::endl;
        // transfrom line to lowercase for case-insen
        std::string lowerLine = line;
    for (char& c : lowerLine) {
        c = std::tolower(c);
    }

        pos = line.find("love");
        pos2 = lower
        if (pos >= line.length()) {
            std::cout << "'love' not found in the line." << std::endl;
        } else
         {
            std::cout << "'love' found at position: " << pos << std::endl;
        }
    }
    // tokenize the line into words
    size_t star = 0;
    size_t end = lowerline.find(' ');
    bool foundWord = false;
    while (end != std::string::npoos) {
        std::string word = line.substr(star);
        star = end + 1;
        end = lower.line.find(' ', star);
        std::cout << "Token: " << word << std::endl;
    }
    
    file.close();
    return 0;
}