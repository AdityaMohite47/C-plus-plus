#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

// Call by Value ....
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

    cout << " a is now " << a << endl
         << " b is now " << b << endl;
}

// Call by Reference ...
void swapPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Call by Reference using C++ Reference Variables...
void swapbyrefvar1(int &a, int &b) 
{
    int temp = a;
    a = b;
    b = temp;  
}

int & swapbyrefvar2(int &a, int &b) // 'int &' means the function returns the reference value , This makes this function a refrence function.
{
    int temp = a;
    a = b;
    b = temp; 
    return a ;  // 69 will be replaced with any integer in a cause a is refrence to a in this function.
}
int main()
{
    int a, b;
    //  cout << "The sum of 4 and 5 is " << sum(4, 5);

    cout << "Enter the value for a" << endl;
    cin >> a;
    cout << "Enter the value for b" << endl;
    cin >> b;

    cout << " a is " << a << endl
         << " b is " << b << endl;

     swap(a,b); //Call by Value...

    // swapPointer(&a, &b); // Call by Reference ... // using pointer this function edits value,
    // by refering to address where pointer points.

    //swapbyrefvar1(a, b); // Call by Reference using reference variables... 
    // swapbyrefvar2(a , b) = 69; // 69 integer becomes reference to a ..
   // cout << " a is now " << a << endl
   //      << " b is now " << b << endl;


}