#include <iostream>
using namespace std;

int c = 69;

int main(int argc, char const *argv[])
{
    int a, b, c = 1;

    cout << "Enter the value for a \n";
    cin >> a;

    cout << "Enter the value for b \n";
    cin >> b;

    cout << "a + b = " << a + b << endl;

    cout << "The local var c is \n"
         << c << endl;

    cout << "The global var c is \n " << ::c << endl; // '::' is scope resolution operator.
                                                      // And it is used to access the variables which are out of a particular scope.

    // if any float is defined suppose  float a = 33.3 and double is defined suppose,

    // b = 33.3 . Now the problem is the compiler standards are that any decimal is

    // naturally a double . Thus to tell the compiler that it is a float we write :

    // float a = 3.33f now this will pass as float or without 'f' it will be passed as a

    // double by default (f or l is not case sensitive).

    // Reference variables :

    float x = 3;
    float &y = x;
    cout << y << endl;

    //  typecasting :

    int z = 1;
    cout << float(z) << endl; // or (float)z

    float q = 2.44f;
    cout << int(q) << endl; // or (int)q

    int d = int(q);
}