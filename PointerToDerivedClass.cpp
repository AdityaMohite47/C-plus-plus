#include <iostream>
using namespace std;
class base
{
public:
    int var_base;
    void display()
    {
        cout << "Displaying Base class variable var_base : " << endl
             << var_base << endl;
    }
};

class derived : public base
{
public:
    int var_derived;
    void display()
    {
        cout << "Displaying Derived class variable 'var_derived' : " << endl
             << var_derived << endl;
        cout << "Displaying Derived class variable inherited form base 'var_base' : " << endl
             << var_base << endl;
    }
};

int main()
{
    base *basepointer; // pointer of base class.

    base obj_base;
    derived obj_derived;

    basepointer = &obj_derived; // here we assign pointer to the object of base class to object of derived class
                               // it is totally valid in C++ and will not throw error.

    //  Behaviour of this pointer : the pointer will point to the object of derived class but we try to call any function
    //                             of derived class the same function of base class will be invoked because the pointer is  of base class.

    //                       Ex. if I try to call display() of obj_derived from derived class the display() of base class
    //                         will get invoked again because the pointer is of base class but it points to derived class.
    //                          This is known as late binding. i.e Runtime Polymorphism.

    //  Practically :
    //     for base class :
    basepointer->var_base = 69;
    basepointer->display();

    // basepointer->varderived = 96  will throw error because when we set a pointer of base class to a class derived from it then we can only
    // access the methods and memebers of base class not of any new member or method added in derived class.

    // Now if :

    derived *derivedpointer;
    derivedpointer = &obj_derived;

    derivedpointer->var_derived = 98;
    derivedpointer->var_base = 333; // This is valid because the derived class is derived from base class so it can access var_base variable.
    derivedpointer->display();
}