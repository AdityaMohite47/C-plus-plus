#include <iostream>
using namespace std;

int main()
{
    //  What is Pointer ? : A datatype when assigned to a variable then it can store address of
    //                     another variable .

    int a = 3;
    /* syntax for pointer */ int *b = &a;

    cout << "Address of a is :" << b << endl; // prints address of a. cout << &a ; is the same as this.

    // & --> address of / address operator.

    // * --> dereferencing operator / value at operator.
    //   If you want to know the value at a particular address then we use this operator

    cout << "value of a is : " << *b << endl; // this will print the value at address of a that is value of a.

    // Pointer to Pointer :

    int **c = &b; // it is a pointer that stores address of pointer.

    cout << "Address of b which points to a is :" << c << endl;
    cout << "value of b which points to a is (address of a) : " << *c << endl;
    cout << "dereferncing value of c gets us the value that we get by dereferncing b : " << **c << endl;
}