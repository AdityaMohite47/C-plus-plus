// #include <iostream>
// using namespace std;

// class Employee
// {
//     int id;
//     int Salary;

// public:
//     void setid()
//     {
//         Salary = 122;
//         cout << "Enter your Id" << endl;
//         cin >> id;
//     }
//     void getid()
//     {
//         cout << "The Id you entered is " << id << endl;
//     }

// };

// int main()
// {
//     // Normal method for objects

//     //   Employee Alok , Aditya , Kiran , Ankush ;

//     //   Alok.setid();
//     //   Alok.getid();

//     // If the no. of employees increase then the efficient way is to make array...

//     Employee fb[4]; // object array storing values

//     for (int i = 0; i < 4; i++)
//     {
//         fb[i].setid();
//         fb[i].getid();
//     }
// }

#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void setdatabysum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void printnm()
    {
        cout << "Your Complex no. is " << a << "+" << b << "i" << endl;
    }
};

int main()
{
    complex c1, c2, c3;
    c1.setdata(1, 2);
    c1.printnm();
    c2.setdata(3, 4);
    c2.printnm();
    c3.setdatabysum(c1, c2);
    c3.printnm();
}