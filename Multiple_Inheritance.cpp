#include <iostream>
using namespace std;

// Syntax for class with muliple inheritances :

// class Derived : {{visibility-mode}} {{Base class 1}} , {{visibility-mode}} {{Base class 2}} ...... {{visibility-mode}} {{Base class n}}
// {

// };

class Base1
{
protected:
    int base1int;

public:
    void getbase1int(int a)
    {
        base1int = a;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void getbase2int(int a)
    {
        base2int = a;
    }
};

class Derived : public Base1, public Base2
{
public:
    void show()
    {
        cout << "The value of base1 is : " << base1int << endl
             << "And same of base2 is : " << base2int << endl;
        cout << "Their Sum is : " << base1int + base2int << endl;
    }
};

// The inherited Derived class will look something like this :

// base1int and base2int will be protected according to visibility mode.   

// member functions :
// getbase1int() and getbase2int() and show are public

int main()
{
    Derived someone;
    someone.getbase1int(25);
    someone.getbase2int(25);
    someone.show();
}

