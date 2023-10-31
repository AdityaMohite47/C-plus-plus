#include <iostream>
using namespace std;

int factorialrecursive(int n) // This is a recursive function..
{
    if (n <= 1)
    {
        return 1;
    }

    return n * factorialrecursive(n - 1);
}

int factorialiterative(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int fibonachirecursive(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return fibonachirecursive(n - 2) + fibonachirecursive(n - 1);
}
int fibonachiiterative(int n)
{
    int fib1 = 0, fib2 = 1, fib; 
    for (int i = 0; i < n; i++)
    {
        fib = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib;
    }
    return fib;
}

int Naturalnoiterative(int n){ // ( if 3 then 1+2 = 3 , 3+3 = 9...)

int sum = (n * n + n) / 2;
return sum ;
}

int Naturalnorecursive(int n){ // ( if 3 then 1+2 = 3 , 3+3 = 9...)

return 1 ;
}
// n! = n*(n-1)! // factorial...
// n = n-2+n-1 // fibonachi series...
// sum = (n * n + n )/2 first N natural no....
int main()
{
    int n;
    // cout << "Enter a number for it's factorial" << endl;
    // cin >> n;
    // cout << "The factorial of " << n << " is " << factorialiterative(n);

  //  cout << "Enter the position of the position of the fibonachi series to obtain it's value" << endl;
  //  cin >> n;
  //  cout << "value at postion of " << n << " : " << endl;
  //  cout << fibonachiiterative(n);

  cout << "Enter the Natural no. upto which you want sum" << endl;
  cin >> n;

  //cout << Naturalnoiterative(n) ;

  cout << Naturalnorecursive(n) ;
}

// Recursion is when a function calls itself untill the base condition meets...