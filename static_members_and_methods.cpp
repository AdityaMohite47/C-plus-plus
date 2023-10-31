#include <iostream>
using namespace std;
class Employee
{
    static int count;
    int id;

public:
    void setdata()
    {
        cout << "Fellow Employee Enter your Id : " << endl;
        cin >> id;
        count++;
    }
    void getdata()
    {
        cout << id << endl
             << "This is Employee no. " << count << endl;
    }

    static void getcount()
    {
        cout << "The value of count is " << count;
    }
};
// count is static member of class Employee..
int Employee ::count; // default value is 0 , accessed by everyone
                      // count is class var of Employee

int main()
{
    Employee Aditya, Alok, Ankush;
    Aditya.setdata();
    Aditya.getdata();
    Employee::getcount();

    Alok.setdata();
    Alok.getdata();
    Employee::getcount();

    Ankush.setdata();
    Ankush.getdata();
    Employee::getcount();
}