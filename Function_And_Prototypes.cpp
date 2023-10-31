#include <iostream>
using namespace std;

// function prototype tells the compiler about the function so,
// wherever the function is written it will not throw an error.

// syntax :
// type function_name (arguments...);

int sum(int x, int y); // int sum (int , int); is also acceptable

int main()
{
    int a, b;
    cout << "Enter a number" << endl;
    cin >> a;
    cout << "Enter another number" << endl;
    cin >> b;
    cout << "The addition of both is : " << sum(a, b); // a and b are actual parameters.
}
int sum(int x, int y) // An simple function ..... x and y here are formal parameters,
                      // these are copy of actual parameters , they can have different names and same too.
{
    return x + y;
}