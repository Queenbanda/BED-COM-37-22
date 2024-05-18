#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
   string line;

    ifstream MyFile("bsc-inf-12-20.txt");

    if(MyFile.is_open()){
        while(getline(MyFile, line)){
            cout<< line << endl;
        }
        MyFile.close();
    }
    else{
        cout<<"Unable to open a file";
    }

    return 0;
}