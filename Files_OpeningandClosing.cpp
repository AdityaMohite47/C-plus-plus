#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream out;
    out.open("sample.txt"); // opening the file...
    out << "This is me : \n";
    out << "This is me too : \n";
    out << "This is also me : \n";
    out << "This is also me too : \n";
    out.close(); // closing the file...

    // Reading the file...
    ifstream in;
    in.open("sample.txt");
    string content;

    while (in.eof() == 0)
    {
        getline(in, content);
        cout << content << endl;
    }

    in.close();
}