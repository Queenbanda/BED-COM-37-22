#include <iostream>

using namespace std;

int main() {
    int rows, cols;

    do {
        cout << "Enter the number of rows (max 3): ";
        cin >> rows;
        if (rows > 3) {
            cout << "Dimensions exceed maximum allowed. Please enter again.\n";
        }
    } while (rows > 3);

    do {
        cout << "Enter the number of columns (max 3): ";
        cin >> cols;
        if (cols > 3) {
            cout << "Dimensions exceed maximum allowed. Please enter again.\n";
        }
    } while (cols > 3);

    double** arr = new double*[rows];
    for (int i = 0; i < rows; ++i) {
        arr[i] = new double[cols];
    }

    cout << "Enter values for the array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter value for element [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    cout << "Values of the array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; ++i) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
