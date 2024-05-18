#include <iostream>
using namespace std;

int main(){
    int integerValue;

    //prompt the user for an integer value between 5 and 10
    cout<<"Please enter an interger values between 5 and 10:  ";
    cin>> integerValue;

    //validate the input
    while(integerValue < 5 || integerValue > 10){
        cout<<"Invalid input: Please enter an integer value between 5 and 10:  ";
        cin>>integerValue;
    }

    //display the accepted value
    cout<<"You entered: "<<integerValue << ". Input accepted!" <<endl;

    return 0;
}