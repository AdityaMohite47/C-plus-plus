// C++ supports a special syntax to pass arguments to multiple base classes.

// The constructor from the derived class recieves all args at once and then will pass the calls
// to the respective base class.

// The body is called after all constructors are finished executing.

//     Syntax :
//         {{Derived-Constructors}}(args......) : {{Base1constructor}}(pass the value for args from args) ,  {{Base1constructor}}(pass the value for args from args)
//         {

//         }

// Note :
// 1.if the constructor is of virtual base class then they are invoked first and than other non-virtual base class
// 2.if there are multiple virtual base classes then they are invoked in the order of declaration.
// 3. After virtual base class constructors , base class constructors are constructed and then lastly that of derived class are constructed.

#include <iostream>
using namespace std;

class Base1
{
    int data;

public:
    Base1(int i)
    {
        data = i;
        cout << "Base 1 Class Constructor Called" << endl;
    }
    void printdata1()
    {
        cout << "The value of data is: " << data << endl;
    }
};

class Base2
{
    int data;

public:
    Base2(int i)
    {
        data = i;
        cout << "Base 2 Class Constructor Called" << endl;
    }
    void printdata2()
    {
        cout << "The value of data is: " << data << endl;
    }
};

// Case 1 flow : Base 1 --> Base 2 --> Execution of code under derived constructor

// class Derived : public Base1, public Base2  
// {
//     int derived1, derived2;

// public:
//     Derived(int a, int b, int c, int d) : Base1(a), Base2(b) 
//     {
//         derived1 = c;
//         derived2 = d;
//         cout << "Derived Class Constructor called " << endl;
//     }
//     void printdatader()
//     {
//         cout << "The value of derived 1 is: " << derived1 << " And that of derived 2 is : " << derived2 << endl;
//     }
// };

// Case 2 flow : Base 2 --> Base 1 --> Execution of code under derived constructor

// class Derived : public Base2, public Base1  
// {
//     int derived1, derived2;

// public:
//     Derived(int a, int b, int c, int d) : Base1(a), Base2(b) 
//     {
//         derived1 = c;
//         derived2 = d;
//         cout << "Derived Class Constructor called " << endl;
//     }
//     void printdatader()
//     {
//         cout << "The value of derived 1 is: " << derived1 << " And that of derived 2 is : " << derived2 << endl;
//     }
// };

// Case 3 flow : Base 2 --> Base 1 --> Execution of code under derived constructor

class Derived : public Base1, public virtual Base2  
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b) // in this line even if the order of definaion change but the order of calling 
                                                             //   constructor will not change
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived Class Constructor called " << endl;
    }
    void printdatader()
    {
        cout << "The value of derived 1 is: " << derived1 << " And that of derived 2 is : " << derived2 << endl;
    }
};

int main()
{
    Derived Aditya(1, 2, 3, 4);
    Aditya.printdatader();
    Aditya.printdata1();
    Aditya.printdata2();
}