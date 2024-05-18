#include <iostream>
using namespace std;

int main(){
    int firstValue;
    int secondValue;

    int* pPointer = nullptr;

    //assign pointer with the address of firstValue
    pPointer = &firstValue;

    //assign the pointer with the value of secondValue
    pPointer = &secondValue;
    *pPointer = 10; //Indirection

    cout<<"firstValue is  "<<firstValue<< '\n';
    cout<<"secondValue is  "<<secondValue<< '\n';

    return 0;
}