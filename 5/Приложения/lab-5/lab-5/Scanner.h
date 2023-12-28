#ifndef SCANNER_H
#define SCANNER_H

#include <string>
#include <vector>
using namespace std;

class Scanner {
private:
    vector<string> words;
    char vowelArray[10] = { 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U' };
public:
    void readFromFile(const string& filename);
    void printVowels() const;
    bool isVowel(const string& sentence) const;
    const vector<string>& getWords();
};

#endif // SCANNER_H