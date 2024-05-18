#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare and initialize an array of strings
    string stringElements[] = {"B123", "C234", "A345", "C15", "B177","G3003","C235","B179"};

    // Loop through each element and check if it starts with 'B'
    for (const string& stringElements : stringElements) {    //This is a foreach loop in c++
        if (stringElements[0] == 'B' ) {    //This statements checks each element in the array with 'B'
            cout << stringElements <<"  ";
        }
    }

    return 0;
}