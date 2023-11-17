// Reading Operation : By using ifstream
//                 Ex > ifstream <object>(<filename.txt>);
//                     string <name of a string> ;
//                     <object> >> <"name of the string"> // reading (displaying) the file content.

// Writing Operation : By using ifstream
//                 Ex > ofstream <object>(<filename.txt>);
//                     string <name of a string> ;
//                     <object> << <"name of the string"> // writing (editing) the file content.

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
    // connecting our file with 'something' :
    ofstream something("sample.txt");

    // setting string to place it in the file :
    string name;
    cout << "Enter Your Name" << endl;
    cin >> name;

    // writing in the file :
    something << "My Name is : " << name;
    something.close(); // closing the file

    ifstream something2("sample.txt");
    string content;

    getline(something2, content);
    cout << "This is the content of sample.txt :" << endl
         << content;
}