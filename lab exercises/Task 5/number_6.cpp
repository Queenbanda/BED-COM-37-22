#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cctype>

using namespace std;

int countVowels(const string& str) {
    int count = 0;
    for (size_t i = 0; i < str.size(); ++i) {
        char c = str[i];
        if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u') {
            count++;
        }
    }
    return count;
}

int countWords(const string& str) {
    istringstream iss(str);
    int count = 0;
    string word;
    while (iss >> word) {
        count++;
    }
    return count;
}

string reverseString(const string& str) {
    string reversed;
    for (int i = str.size() - 1; i >= 0; i--) {
        reversed += str[i];
    }
    return reversed;
}

string capitalizeSecondLetter(const std::string& str) {
    string capitalized;
    bool capitalize = false;
    for (size_t i = 0; i < str.size(); ++i) {
        char c = str[i];
        if (isalpha(c)) {
        	
            if (capitalize) {
                capitalized += toupper(c);
                capitalize = false;
            } else {
                capitalized += c;
                capitalize = true;
            }
        } else {
            capitalized += c;
        }
    }
    return capitalized;
}
int main() {
    ifstream file("text.txt"); 
    if (!file) {
        cerr << "Error opening file." << endl;
        return 1;
    }

    string fileData;
    getline(file, fileData);

    int numVowels = countVowels(fileData);
    cout << "Number of vowels: " << numVowels << endl;

    int numWords = countWords(fileData);
    cout << "Number of words: " << numWords << endl;

    cout << "Reversed statement: " << reverseString(fileData) << endl;

    cout << "Capitalized second letter: " << capitalizeSecondLetter(fileData) << endl;

    return 0;
}
