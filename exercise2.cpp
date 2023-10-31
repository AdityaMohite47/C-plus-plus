#include <iostream>
using namespace std;

;

int main() // (0,1,1,2,3,5,8,...42)
{

    int a = 0, b = 1, c, d;

    cout << a << ",";
    cout << b << ",";

    for (int i = 0;; i++)
    {
        c = a + b;
        cout << c << ",";
        c = a;
        b = c;
        if (c = 42)
        {
            break;
        }
    }
}