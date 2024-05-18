#include<iostream>
#include<cstring>

using namespace std;

int main() {

    string myStr[] = {"B123","C234","A345","C15","B177","G3003","C235","B179"};
    char initialChar = 'B';

    for (int i = 0; i < sizeof(myStr); i++){
        if(myStr[i][0] == initialChar){
            cout << myStr[i] << endl;
        }
    }


    return 0;
}