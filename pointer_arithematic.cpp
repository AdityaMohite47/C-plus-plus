#include <iostream>
using namespace std;

int main()
{
    // Pointers and Arrays :

    // Address of 1st block of array (array it self...) is the name of array.
    // derefereing this pointer will give value at block 1 of array.
    // value changes block by block every time the pointer is
    // incremented.

    // basic formula for pointer arithematic :

    // address (new) = address(old) + i(index) * size of datatype.
    //  *(p+i)                p

    int marks[4] = {33, 43, 44, 48};

    int *p = marks; // pointer pointing array marks

    //  cout << "The address value marks[0] of array marks is :" <<p;

    for (int i = 0; i < 4; i++)
    {
        cout << "The value of *p+" << i << " is : " << *(p + i) << endl;
    }
}