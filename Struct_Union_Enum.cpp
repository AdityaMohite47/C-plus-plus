// Sturcture : 

// #include <iostream>
// using namespace std;

// struct Employees
// {
//     int Id ;
//     float salary ;
//     char favchar ;
// } Aditya , Alok , Pratik ;

// int main()
// {
//    Pratik.Id = 001;
//    Pratik.salary = 100000;
//    Pratik.favchar = 'e';

//    cout << Pratik.Id  << endl;
//    cout << Pratik.favchar  << endl;
//    cout << Pratik.favchar  << endl;
// }

// Union :
//#include <iostream>
//using namespace std;

// union money // all datatypes will have a shared memory . 
             // if one datatype is used then another will not be . 
             // better memory management ...
             // if more than one is used the value will be overwritted and you will get 
             // garbage value...
// {
//     int rice; 
//     char car ;
//     float bount ;
// } m1 ;

// int main()
// {
//  m1.rice = 34 ;

//  cout << "M1 has " << m1.rice << " Kgs of rice as an exchange value for our product..." << endl;
// }

// typedef can change name of a datatype... it is automatic in c++..

#include <iostream>
using namespace std;

int main()
{
    //enum or enumeration is a data type consisting of named values like elements, members, etc., that represent integral constants. 
    //It provides a way to define and group integral constants. 
    //It also makes the code easy to maintain and less complex
  enum meal {breakfast , lunch , dinner};
    meal a = breakfast ;
  cout << a << endl ;
}