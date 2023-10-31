#include <iostream>
using namespace std;

int main()
{

     /*     Control structures : The blocks of program where logic is defined (like if else or switch statements.).

          Types of control structures :

          1 . Sequence structure : Entry in program --> Action 1 --> Action 2 --> ..... Exit program.


          2 . Selection structure : Entry in program --> condition 1 (true then Action 1 , false then Action 2) --> Exit program.

               if else statement :

         if (condition)
         {
             Action 1
         }

          if else ladder statement :

         if( condition )
         {
              Action 1
         }
         else if ( condition )
         {
              Action 2
         }
         else
         {
              Action 3
         }


          switch case :

         switch (expression)
         {
         case 1:
              Action 1
             break;
         case 2:
              Action 2
             break;
         default:
             break;
         }

          3 . Loop structure : Entry in program --> condition 1 ( if true then Action 1 and again condition 1) --> condition 1 false then exit program.

           A. for loop :
                 for (int i = 0; i < count; i++)
                 {
                      code
                 }

           B. while loop :
                 while ( condition )
                 {
                      code
                 }

           C. Do while loop :
                 do
                 {
                      code
                 } while ( condition ); // if condition is false then tho loop will work 1 time at least.

     */

     // Examples :

     // int age;

     // cout << "Enter your Age" << endl;
     // cin >> age;

     // if (age <= 18)
     // {
     //     cout << "You are underaged teen" << endl
     //          << "You are not eligilble to drive or own a vehicle";
     // }
     // else if (age > 18)
     // {
     //     cout << "Your age is perfect to drive " << endl << "Go ! get yourself a lisence";
     // }

     // switch (age)
     // {
     // case 18:
     //     cout << "You are underaged teen" << endl;
     //     break; // if break is not used then all case blocks will get executed.

     // default:
     //     cout << "No special cases...." << endl;
     //     break;
     // }

     // int N, n = 1;

     // cout << "Enter the no. of table you want to print" << endl;
     // cin >> N;

     // do
     // {
     //     cout << N << "X" << n << "=" << N * n << endl;
     //     n++;
     // } while (n <= 10);

     int n, sum = 0;

     cout << "Enter the no. you want it's table to be printed" << endl;
     cin >> n;
     int i = 1;
     while (i <= 10)
     {

          cout << n << "X" << i << "=" << n * i << endl;
          i++;
     }

     //   sum = (n * n + n) / 2;
}