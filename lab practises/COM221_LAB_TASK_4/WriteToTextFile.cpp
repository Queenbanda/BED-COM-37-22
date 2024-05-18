//writing on a text file
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream MyFile("bsc-inf-12-20.txt");
    if(MyFile.is_open()){
        MyFile<<"My name is Stephano Kachingwe. \n";
        MyFile<<"I am a Student at UNIMA. \n";
        MyFile.close();
    }
    else{
        cout<<"unable to open a file";
    }

return 0;
}