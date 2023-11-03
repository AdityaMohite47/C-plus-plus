#include <iostream>
using namespace std;

class base1
{
public:
    void greet()
    {
        cout << "How are you";
    }
};

class base2
{
public:
    void greet()
    {
        cout << "Alright ?";
    }
};

class base3 : public base1, public base2
{
    int a;

public:
    void greet()
    {
        base2::greet(); // Ambiguity 1 Resolution
    }
};

class b
{
public:
    void say()
    {
        cout << "Hello World" << endl;
    }
};

class d : public b
{
    int a;

public:
    void say() // This new method will overwrite the method derived from the b class.
    {
        cout << "Welome to my chenull" << endl;
    }
};

int main()
{
    //   Ambiguity 1 :

    // base1 obj1;
    // base2 obj2;

    // obj1.greet();
    // cout << endl;
    // obj2.greet();

    // base3 obj3;
    // obj3.greet();

    // b B;
    // B.say();

    d D;
    D.say();
}