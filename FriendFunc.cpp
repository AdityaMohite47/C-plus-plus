#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    void setnum(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    // Below decleration tells compliler that sumc() [which is non-member function..]has permission (is not a method of Class)
    friend Complex sumc(Complex o1, Complex o2);
    void print()
    {
        cout << "Your Number is " << a << " + " << b << "i" << endl;
    }
};

Complex sumc(Complex o1, Complex o2)
{
    Complex o3;
    o3.setnum((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
// friend decleration gives access to sumc() for accessing private var in the class...
// Following are the friend functions :

// 1. The friend Functions are not in the scope of the Class. Just it has access to the
// private data of the class ...

// 2. Since it is not in the Scope of the Class , it cannot be given call form objects
// of the class ... Ex. c2.sumc() is invalid ...

// 3. This type of functions can be invoked without any objects....

// 4. Contains Objects as arguments (usually) ...

// 5. Decleration can be done in Private or public part of class ...

// 6. It cannot access the members of class directly by their names and need 'objectname.membername'
// to access any member...

int main()
{
    Complex c1, c2, sum;

    c1.setnum(2, 4);
    c1.print();
    c2.setnum(5, 8);
    c2.print();
    sum = sumc(c1, c2);
    sum.print();
}