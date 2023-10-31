#include <iostream>
using namespace std;

class Simple
{
    int data1, data2, data3;

public:
    Simple(int a, int b = 6, int c = 9) // b is defined already , if not given an argument in b's place then the default value takes it's precedence.
    {                                   // same goes for c too...
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void print()
    {
        cout << "Two numbers are " << data1 << " , "
             << data2 << " And " << data3 << endl;
    }
};

int main()
{
    Simple s(1);
    s.print();
}