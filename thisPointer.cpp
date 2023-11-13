#include <iostream>
using namespace std;

class A
{
    int x;

public:
    // void setdata(int x)
    // {
    //     // a = a; here the precedence is of local var (int a of the method) not of class var a .[Thus 1 = 1 and this will not show any error but
    //     //          on execution it will throw garbage value.]
    //     this->x = x;
    // }
    void getdata()
    {
        cout << "The value of x of object 'a' is : " << x;
    }

    // for returning the object of which we have setted the data :

    A &setdata1(int x)
    {
        this->x = x;
        cout <<"The Address of the object 'a' is : " <<this << endl; // prints the address of the object
          //     OR
         return *this;
    }
};
int main()
{
    // A a ;
    // a.setdata(1); This will throw garbage value error ;
    // a.getdata();

    A a;
    // a.setdata();
    // a.getdata();

    a.setdata1(1).getdata(); // here setdata1 returns the object 'a' who is created and now since an object a is returned by setdata1
                             // we can call another method of the same object 'a' i.e getdata in a single line
}

// 'this' is a keyword which is a pointer which points to the object created/that invokes the member function.
// we use 'this' with arrow operator.
