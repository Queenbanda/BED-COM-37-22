#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

// Function to count vowels in a string
int countVowels(const string& str) {
    int vowelCount = 0;
    for (char ch : str) {
        if (isalpha(ch)) {
            char lowercaseCh = tolower(ch);
            if (lowercaseCh == 'a' || lowercaseCh == 'e' || lowercaseCh == 'i' ||
                lowercaseCh == 'o' || lowercaseCh == 'u') {
                vowelCount++;
            }
        }
    }
    return vowelCount;
}

// Function to count words in a string
int countWords(const string& str) {
    int wordCount = 0;
    bool inWord = false;
    for (char ch : str) {
        if (isalpha(ch)) {
            if (!inWord) {
                inWord = true;
                wordCount++;
            }
        } else {
            inWord = false;
        }
    }
    return wordCount;
}

// Function to reverse a string
string reverseString(const string& str) {
    return string(str.rbegin(), str.rend());
}

// Function to capitalize the second letter of each word
string capitalizeSecondLetter(const string& str) {
    string result;
    bool capitalizeNext = true;
    for (char ch : str) {
        if (isalpha(ch)) {
            if (capitalizeNext) {
                result += toupper(ch);
                capitalizeNext = false;
            } else {
                result += ch;
            }
        } else {
            result += ch;
            capitalizeNext = true;
        }
    }
    return result;
}

int main() {
    string fileData,line;
    ifstream myfile("stephano.txt"); 
    if (myfile.is_open()) {
        getline(myfile, line); 
        fileData = line;
        myfile.close(); // Close the file

        // Calculate and output the number of vowels
        int vowelCount = countVowels(fileData);
        cout << "Number of vowels: " << vowelCount << endl;

        // Calculate and output the number of words
        int wordCount = countWords(fileData);
        cout << "Number of words: " << wordCount << endl;

        // Reverse the statement and output
        string reversedStatement = reverseString(fileData);
        cout << "Reversed statement: " << reversedStatement << std::endl;

        // Capitalize the second letter of each word and output
        std::string capitalizedStatement = capitalizeSecondLetter(fileData);
        std::cout << "Capitalized statement: " << capitalizedStatement << std::endl;
    } else {
        std::cout << "Error opening the file." << std::endl;
        return 1;
    }

    return 0;
}
