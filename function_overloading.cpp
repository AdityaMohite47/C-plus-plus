// overloading means to use a thing for multiple times...
// C++ uses polymorphism : Polymorphism means a thing having multiple forms...

#include <iostream>
using namespace std;
int add(int a, int b)
{
    return a + b;
}

int add(int a, int b, int c)
{
    return a + b + c;
}

int volume(int r, int h)
{
    return (3.14f * r * r * h); // volume of cylinder
}
int volume(int a)
{
    return a * a * a;
}
int volume(int l, int b, int h)
{
    return (l * b * h);
}

int main()
{
    cout << "sum of 3 and 7 is " << add(3, 7) << endl;
    cout << "sum of 3 and 7 and 6 is " << add(3, 7, 6) << endl;
    cout << "The cylinder of radius 3 and height 8 has volume " << volume(3, 8) << endl;
    cout << "The cube of side 6 has volume " << volume(6) << endl;
    cout << "The cuboid of length of 5 breadth of 4 and height of 7 has area of " << volume(5, 4, 7) << endl;
}