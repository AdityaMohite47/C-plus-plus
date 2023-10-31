#include <iostream>
using namespace std;

class Employee // BASE CLASS ....
{

public:
    int ID;
    float Salary;
    Employee() {}
    Employee(int inpID)
    {
        ID = inpID;
        Salary = 200.0;
    }
};

// DERIVED CLASS SYNTAX :

// class {{Derivedclassname}} : {{visibility-mode}}  {{baseclassname}}
// {

// };

// visibiliy mode is inheritance extent (we can do it privately and publically)
// if we do it publically : Base class public members --> Derived class public members...
// if we do it privately : Base class public members --> Derived class private members...
// Base class private members can never be inherited...
// This provides data abstraction...
// Default visibility mode is private...


class Programmer : public Employee // Make sure to make a default constructor of the base class because
                                   // derived class will try to call base class default constructor because we inherited
                                   // base class..
{
public:
    int Languagecode = 9, ID;
    Programmer(int inpid)
    {
        ID = inpid;
    }
    // void getdata()
    // {
    //     cout << "The ID is " << ID << endl;
    // }
};

int main()
{
    Employee E1(101), E2(102), E3(103);

    cout << " The Salary of Employee E1 is " << E1.Salary << endl;
    cout << " The Salary of Employee E2 is " << E2.Salary << endl;
    cout << " The Salary of Employee E3 is " << E3.Salary << endl;

    Programmer Skillf(111);
    cout << " skillf value " << Skillf.Languagecode << endl;
    // Skillf.getdata();
    cout << Skillf.ID << endl;
}