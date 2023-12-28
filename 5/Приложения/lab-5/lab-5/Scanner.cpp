#include "Scanner.h"
#include <fstream>
#include <algorithm>
#include <iostream>

using namespace std;

void Scanner::readFromFile(const string& filename) {
    ifstream file(filename);
    if (file.is_open()) {
        string word;

        while (file >> word) {
            //cout << "Word: " << word << endl;
            words.push_back(word);
        }

        file.close(); 
    }
    else {
        cout << "Unable to open file" << endl;
    } 
}

void Scanner::printVowels() const {
    for (const auto& word : words) {
        if (isVowel(word)) {
            cout << word << '\n';
        }
    }
}

bool Scanner::isVowel(const string& word) const {
    return word != "" && (find(begin(vowelArray), end(vowelArray), word.at(0)) != std::end(vowelArray));
}

const vector<string>& Scanner::getWords() {
    return words;
}