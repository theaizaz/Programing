/*
    * Read.cpp
    *
    *  Created on: Nov 24, 2018
    * 
    * ifstream: Stream class to read from files
    * ofstream: Stream class to write on files
    * fstream: Stream class to both read and write from/to files
*/

#include <iostream>
#include <fstream> // Base class for file stream, Both ifstream and ofstream inherit from it
using namespace std;

int main() {
    ofstream hout("file.txt");
    string name;
    cout << "Enter your name: ";
    cin >> name;

    hout <<"My name is : "+ name << endl;
    hout.close();

    ifstream hin("file.txt");
    string word;
    hin>>word;
    cout<<"First word of file is : "<<word<<endl;

    string line;
    getline(hin,line); // This will only read one line
    cout<<line;
    hin.close();

    ifstream hin2;
    hin2.open("file.txt");

    string line2;
    while(getline(hin2,line2)) // This will read all lines
        cout<<line2<<endl;

    /*
        or
        while(hin2.eof()==false){ // eof() returns true when end of file is reached
            getline(hin2,line2);
            cout<<line2<<endl;
        }
    */

    hin2.close();


    return 0;
}