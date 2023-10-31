#include <iostream>
using namespace std;

inline int product(int a, int b)
{ // using inline the compiler will replace the function call
  // to code in function while compilation of the code...
  // used for saving some time when a small function is called
  // multiple times.. not for big functions !!....
    return a * b;
}
int main()
{
    int a, b;
    cout << "Enter the value of a and b" << endl;
    cin >> a >> b;

    cout << "The product of a and b is " << product(a, b);
}

// inline functions are not recommended to use while recursion or for functions having
// static variables (where the initialization line runs only one time and value of any
// variable in retained(var remembers it's value)) or functions containing for loops and switch cases...
