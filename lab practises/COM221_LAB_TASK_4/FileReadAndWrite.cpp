#include <iostream>
#include <fstream>
using namespace std;

int main(){
    char data[100];

    //open a text file in write mode
    ofstream outfile("stephano.txt", ios::in | ios::out);
    outfile.open("stephano.text");

    cout<<"Writing to a file"  <<endl;
    cout<<"Enter your name: ";
    cin.getline(data, 100);

    //write inputted data to the text file
    outfile<<data<<endl;

    cout<<"Enter your age:";
    cin>>data;
    cin.ignore();

    //again write inputted data into the text file
    outfile<<data<<endl;
    outfile.close();

    //open the text file in read mode
    ifstream infile;
    infile.open("stephano.txt");

    //reading from the file
    cout<<"Reading from the file:"<<endl;
    infile>>data;

    //writing the data at the screen
    cout<<data<<endl;

    //again read the data from the file and display it
    infile>>data;
    cout<<data<<endl;

    //close the opened file
    infile.close();

    return 0;
}