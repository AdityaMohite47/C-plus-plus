// Initilization section is used for quickly assigning the values...

// Syntax for initialization list in constructor :

//         constructor(args-list) : initilization-section
//         {
//            // code //
//         }

// Ex :

//     if I have  :

//     class test {
//         int a , b ;
//         public:
//         test(int i , int j );

//         if i want to assign a to i and b to j in a line without writing the body of constructor then :

//         test(int i , int j) : a(i) , b(j) ;

//     };

#include <iostream>
using namespace std;

class test
{
    // int a , b ;
    int b , a ;
public:
    //case 1:
    //test(int i, int j) : a(i), b(j)

    // case 2:
    // test(int i, int j) : a(i), b(i+j)

    // case 3:
    //test(int i, int j) : a(i), b(2*j)

    //case 4:
    //test(int i, int j) : a(i), b(a+j)

    // case 5:
    // test(int i, int j) : b(j) , a(i+b) // throws a garbage value because of a will be initialized first in private.

    // case 6 : 
    test(int i, int j) : b(j) , a(i+b) // this will run because for now b is initialized first in the private.
    {
        cout << "constructor executed" << endl;
        cout << "value of a is " << a << " and value of b is " << b << endl;
    }
};

int main()
{
    test t(4, 6);
}
