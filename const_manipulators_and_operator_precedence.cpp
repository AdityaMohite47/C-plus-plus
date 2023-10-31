#include <iostream>
#include <iomanip> // is a header file.
using namespace std;

int main(int argc, char const *argv[])
{
  // constants in c++ are unchangable ex. const int a = 1 ;
  // Then the value of a will be one forever , changing it will give error before compiling.

  const int a = 1; // here value of this variable becomes read only value.

  //  Manipulators are the operators which help programmer to format the display of data.
  // Ex. endl (creates new line) ,  setw() [this is function form iomanip header file]

  // setw(//argument//) in argument setw takes integer.

  cout << "The value of a is (using setw)" << setw(4) << a << endl;
  cout << "The value of a is (without using setw)" << a << endl;

  // so in output we see that setw(4) creates space before printing value. 


  // Operator Precedence :  how operators should be used while mathematics in cpp for correct answers.
  // if precedence is same for both operators then associativity is the certeria. 
  // check website : 'cppreference.com' for details.


    
}
