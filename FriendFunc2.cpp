#include <iostream>
using namespace std;

class Y ;

class X
{
    int data;

public:
    void setvalue(int value)
    {
        data = value;
    }
    friend void add(X, Y);
};

class Y
{
    int data;

public:
    void setvalue(int value)
    {
        data = value;
    }
    friend void add(X, Y);
};

void add(X o1, Y o2)
{
    cout << "Summing the data of objects of class X and Y gives me " << o1.data + o2.data << endl;
}

int main()
{
    X a;
    a.setvalue(4);
    Y b;
    a.setvalue(5);
    add(a, b);
}