#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

double calculateSquareArea(double side) {
    return side * side;
}

double calculateRectangleArea(double length, double width) {
    return length * width;
}

double calculateTriangleArea(double base, double height) {
    return height * base / 2;
}

int main() {
    int option;
    cout << "Please enter the instructions for what you want to do:" << "\n" <<
         "1 - for calculating area of square by a single side" << "\n" <<
         "2 - for calculating area of rectangle by two sides" << "\n" <<
         "3 - for calculating area of right triangle by two sides" << "\n" <<
         "4 - for closing this application" << "\n";
    cout << "Please select the area of the shape you want to calculate \n1. Square \n2.Rectangle \n3.Triangle \n4.Quit program \n\nEnter your selection:";
    while(true) {
        cin >> option;
        if (option == 1) {
            cout << "Enter a side value: ";
            double side;
            cin >> side;
            cout << "Area of this square is " << calculateSquareArea(side) << "\n";
        } else if (option == 2) {
            cout << "Enter a two values - length and width of a rectangle \n";
            double length, width;
             cout << "Enter length:   ";
            cin >> length;
             cout << "Enter width:    ";
            cin>> width;
            cout << "Area of this rectangle is " << calculateRectangleArea(length, width) << "\n";
        } else if (option == 3) {
            cout << "Enter a two values - base and height sides of a right triangle \n";
            double base, height;
             cout << "Enter base:    ";
            cin >> base;
             cout << "Enter height:   ";
            cin >> height;
            cout << "Area of this triangle is " << calculateTriangleArea(base, height) << "\n";
        } else if(option < 0 & option >4){
            cout<<"Your input was:  "<<option  <<"   which is an invalid input";
            cout<<"Please enter a valid input";
         } else{
            return 0;
        }
        cout << "Select another option: ";
    }
}
