#include <iostream>
using namespace std;

template <class t1 = int, class t2 = float, class t3 = char > // specifying the default datatypes for template...

class Aditya
{
public:
    t1 a;
    t2 b;
    t3 c;

    Aditya(t1 x, t2 y, t3 z)
    {
        a = x;
        b = y;
        c = z;
    }

    void display()
    {
        cout << "The value of a is " << a << endl
             << "The value of b is " << b << endl
             << "The value of c is " << c << endl;
    }
};

int main()
{
    // Aditya<> A(4 , 6.9 , 'a'); using template with default datatypes
    // A.display();

    Aditya<float, char, char> B(6.9, 's', 'p'); // by specifiying datatypes for t1 , t2 , t3 ignoring default datatypes
    B.display();
}