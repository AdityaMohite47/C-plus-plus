#include <iostream>
using namespace std;

int main()
{
    //  What is an Array ? : collection of data of similar type stored in contiguous memory locations.
    //                         (contiguous means next or together in sequence.)

    // to store multiple data without creating multiple variables of same type we can create arrays.

    // syntax : datatype_arrayname_[size in numbers] = {numbers.....} ;

    // Example :

    int marks[4] = {22, 33, 44, 55};

    // printing values of array in their respective indexes.

    for (int i = 0; i < 4; i++)
    {
        cout << marks[i] << endl;
    }

    // same with while and do while loops :

    int i = 0;
    while (i < 4)
    {
        cout << marks[i] << endl;
        i++;
    }

    int j = 0;
    do
    {
        cout << marks[j] << endl;
        j++;
    } while (j < 4);

    // You can change the value index in array even after it's defination.
}