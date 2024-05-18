#include<iostream>

using namespace std;

double square(double side){
    double area = side * side;
    return area;
}

double rect(double length, double width){
    double area = length * width;
    return area;
}

double triangle(double base, double height){
    double area = 0.5*(base * height);
    return area;
}

int main(){
    int input;
    double num1,num2;
    while (true){
        cout << "Please select the area of the shape to calculate"<< endl;
        cout << "1.Square\n2.Rectangle\n3.Triangle\n4.Quit" <<endl;
        cin >> input;
        if (input == 1){
            cout << "Enter the value of sides of the square: " << endl;
            cin >> num1;
            cout << "Area = " << square(num1) << endl;
        }else if (input == 2){
            cout << "Enter the value of Length of the Rectangle: " << endl;
            cin >> num1;
            cout << "Enter the value of width of the Rectangle: " << endl;
            cin >> num2;
            cout << "Area = " << rect(num1,num2) << endl;
        }else if(input == 3){
            cout << "Enter the value of Base of the Triangle: " << endl;
            cin >> num1;
            cout << "Enter the value of Height of the Triangle: " << endl;
            cin >> num2;
            cout << "Area = " << triangle(num1,num2) << endl;
        }else if(input == 4){
            cout << "Program exiting..."<<endl;
            break;
        }else{
            cout << "Your input was " << input << " which is an invalid input"<<endl;
        }
        
    }
    
}
