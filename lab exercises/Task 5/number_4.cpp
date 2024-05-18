#include <iostream>

using namespace std;

int main() {
    int input;

    while (true) {
        cout << "Please enter an integer value between 5 and 10: \n";
        if (!(cin >> input)) {
            cout << "Invalid input. Please enter an integer value" <<endl;
            cin.clear();
            cin.ignore(10000, '\n');
        } else if (input >= 5 && input <= 10) {
            cout << "Your input value(" << input << ") has been accepted." << endl;
            break;
        } else {
            cout << "You entered: " << input << " Please enter an integer value between 5 and 10." << endl;
        }
    }
    
    return 0;
}

