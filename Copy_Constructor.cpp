#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    };
    Number(int num)
    {
        a = num;
    }
    // Number(Number &obj){ // This is a Copy Constructor which has reference to the object it copies.. in this case z.
    //     cout << "Copy constructor Invoked" << endl;
    //     a = obj.a;
    // }
    void show()
    {
        cout << "You entered : " << a << endl;
    }
};

int main()
{
    Number x, y, z(69), z2;

    x.show();
    y.show();
    z.show();

    // If I want to make z1 which resembles z then z1 will be invoked using copy constructor and z will be passed...

    Number z1(z);
    z1.show();

    // Complier always assings a default copy constructor to each class
    // Thus even if the copy constructor is commented out , the progarm runs because of the default copy contructor
    // which just takes value but the statement " Copy Constructor Invoked " will not get print.

    z2 = z;
    z2.show(); // the statement " Copy Constructor Invoked " will not get print.

    Number z3 = z; // the statement " Copy Constructor Invoked " will  get print (default copy constructor not defined one.).
    z3.show();

    // if a object is  declared and assignment is done in same line then copy constructor is invoked ;
    // And if object just is declared and then assignment is done in another line then copy consturctor is not invoked .
}