#include <iostream>
using namespace std;

class Employee
{

public:
    int ID;
    float Salary;
    Employee() {}
    Employee(int inpid)
    {
        ID = inpid;
        Salary = 200.0;
    }
};

class Programmer : public Employee
{
public:
    int langcode = 9;
    Programmer(int inpid)
    {
        ID = inpid;
        Salary = 250000;
        langcode = 9;
    }
};

int main()
{
    Employee Employee1(101), Employee2(102), Employee3(123);
    cout << "EMPLOYEE " << Employee1.ID << " HAS SALARY OF " << Employee1.Salary << endl;

    Programmer SKILLF(69);
    cout << "PROGRAMMER " << SKILLF.ID
         << " HAS SALARY OF " << SKILLF.Salary
         << " AND USES LANGUAGE WITH THE CODE" << SKILLF.langcode
         << endl;
}