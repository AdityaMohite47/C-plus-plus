#include <iostream>
using namespace std;

// Suppose this class :
class base
{
public:
    int var_base = 1;
    virtual void display()
    {
        cout << "Displaying Base class variable var_base : " << endl
             << var_base << endl;
    }
};

class derived : public base
{
public:
    int var_derived = 2;
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
    base *basepointer;
    base obj_base;
    derived obj_derived;

    basepointer = &obj_derived;

    basepointer->display(); //defalut behaviour of pointer to derived class i.e display() of base will be invoked and executed...

    // But In C++ if we want to change this behaviour , we use Virtual Functions : 

    // We need to change the type of function display() of base class to virtual , so that compiler understands that if a function identical to 
    // base class exists in derived class and is invoked through pointer of base class pointing to object of derived class , the function of 
    // derived class is invoked rather than that of base class (which is opposite of the behaviour of pointer to derived class...)

    // Just like friend function :
    
    // virtual {{datatype}} {{function name}} (args){
    //     *body of the function ....*
    //  }


}