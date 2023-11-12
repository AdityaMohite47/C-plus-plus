#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
// class randomlist
// {
// public:
//     int array[10] = {};

//     void generate(){
//        for (int i = 1; i <= 10; i++)
//     {
//         array[i] = rand() % 100;
//     }
//     }

// };

int main()
{
    srand(time(NULL));
    int array[10] = {};

    cout << "The random list is : " << endl;
    for (int i = 1; i <= 10; i++)
    {
        array[i] = rand() % 100;
        cout << array[i] << endl;
    }

    cout << "Odd numbers for the above list :" << endl;
    for (int i = 1; i <= 10; i++)
    {
        if (array[i] % 2 != 0)
        {
            cout << array[i] << endl;
        }
    }

    cout << "Even numbers for the above list :" << endl;
    for (int i = 1; i <= 10; i++)
    {
        if (array[i] % 2 == 0)
        {
            cout << array[i] << endl;
        }
    }
}