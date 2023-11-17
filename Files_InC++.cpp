#include <iostream>
#include <cstring>
#include <fstream> // for including classes
using namespace std;

// The useful classes for working with files in c++

// 1. fstream-baseclass
// 2. ifstream --> input file stream derived from fstream-baseclass...
// 3. ofstream --> output file stream derived from fstream-baseclass...

// In order to work with files in C++ , you will have to open it ,
//         there are primarily 2 ways to open a file :
//                             a. using constructor.
//                             b. using member function open() of the class.

int main()
{
    
    //  Opening files using constructor and reading it ...
    // string st = "Aditya Mohite";

    // ofstream out("samplefileforIntroduction.txt");

    // out << st ; // check the file after running this line...

    

    // Opening files using constructor and reading from it...
    string st2, st3;

    ifstream in("samplefileforIntroduction.txt");

    // in >> st2; for just a word from a line in a file

    getline(in, st2); // used to get line from a file
    getline(in, st3); // for next line from a file
    cout << st2 << endl;
    cout << st3 << endl;
}