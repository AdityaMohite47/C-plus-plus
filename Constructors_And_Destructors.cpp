#include <iostream>
using namespace std;

// class Complex
// {
//     int a, b;

// public:
//     void setnum(int n1, int n2)
//     {
//         a = n1;
//         b = n2;
//     }

//     friend Complex sumc(Complex o1, Complex o2);
//     void print()
//     {
//         cout << "Your Number is " << a << " + " << b << "i" << endl;
//     }
// };

// Complex sumc(Complex o1, Complex o2)
// {
//     Complex o3;
//     o3.setnum((o1.a + o2.a), (o1.b + o2.b));
//     return o3;
// }

// This is a default method of using classes using main function.

// int main()
// {
//     Complex c1, c2, sum;

//     c1.setnum(1, 2);
//     c1.print();

//     c2.setnum(1, 2);
//     c2.print();

//     sum = sumc(c1, c2);
// }

// But what if we can declare object and define it's value in one line so it will
// be convinent...

//  We will make a function that will handle this declaration and defination part.

// int sum = 6 ; // set the value of sum '6' is the defination of this var sum.
// Same can be done with classes so that we don't need to define extra functions like
// setnum() which sets the value.

// A Constructor is a special member function with same name as of the class
// and is used to initalize the objects of the class.
// A constructor automatically runs(invoked,called) when a object is created.
// A constructor has no return value but a function has .

// class Complex
// {
//     int a, b;

// public:
//     //  Complex(void); // declaration of constructor
//     Complex(int, int);
//     void print()
//     {
//         cout << "Your Number is " << a << " + " << b << "i" << endl;
//     }
// };

// Complex::Complex(void) // defination of constructor , It is a default constructor.
// {
//     a = 10; // value of objects are setted
//     b = 69; // muliple objects can be defined in same ways (c1,c2,c3)
// }

// Complex::Complex(int x, int y) //  It is a parameterized constructor.
// {
//     a = x;
//     b = y;
// }

// int main()
// {
//     // Complex c;

//     // c.print();

//     // c1.print();
//     // c2.print();
//     // c3.print();

//     // Implicit call method for parameterized functions
//     // Complex a(4 , 6);
//     // a.print();

//     // Explicit call method for parameterized functions
//     // Complex a = Complex(4, 6);
//     // a.print();
// }

// Type of Consturctor :

// Default Constructor : Which accepts no parameters.
// Parameterized Constructor : which accepts parameters.

// Properties of Constructor

//  1. It should be declared in the public section of the class .
//  2. A constructor is automatically invoked when a object is created.
//  3. They do not have return type , they don't return anything .
//  4. They can have default arguments.
//  5. We cannot refer to their address.

// Desturctors : It never takes values nor does it returns anything and is runed by compiler implicitly to clear the memory
int count = 0;

class num
{
public:
    num()
    {
        count++;
        cout << "This is the time when constructor is called for object number : " << count << endl;
    }
    ~num()
    {
        cout << "This is the time when destructor is called for object number : " << count << endl;
        count--;
    }
};


int main()
{
    cout << "We are inside the main function" << endl;

    cout << "Creating first object " << endl;

    num N1;

    cout << "Entering the block : " << endl;
    {
        cout << "Creating two more objects " << endl;
        num N2, N3;
    }
    cout << "Exiting the block " << endl;

    cout << "Back to main" << endl;

}
