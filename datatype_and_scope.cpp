//  datatypes : int , float , char , double (float with precision) , boolean (determines true or false i.e will print 1 or 0 for true and false).

//  Scope : local (var is avaliable upto the function's end and can be used upto that function only.)

//          global (var is avaliable globally and exists upto programs end and also can be used in any function in program.)

// yes global and local var can have same name but in this case local var will take it's precidence.

// datatypes in c++ are categorised in 3 groups :

// 1. build-in : int , float , char , double , boolean.

// 2. user-defined : structure , union , Enum.

// 3. derived : array , function , pointers.

#include <iostream>
using namespace std;
#define PI 3.14
int main(int argc, const char *argv[])
{
     int a = 4, b = 5;
     char c = 'C';
     cout << "\n The value of a is : \n"
          << a;
     cout << "\n The value of b is : \n"
          << b;
     cout << "\n The value of PI is \n"
          << PI;
     cout << "\n This is a character \n"
          << c;
}