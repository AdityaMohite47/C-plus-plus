#include <iostream>
using namespace std;

class complex
{

    int real, imaginary;

public:
    void getdata()
    {
        cout << "The real part is " << real << " And the Imaginary part is " << imaginary;
    }

    void setdata(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};

int main()
{
    // complex c1;
    // complex *ptr = &c1; // an object of class complex which is a pointer to object c1 of the same class.

    // simple way :
    // c1.setdata(1, 54);
    // c1.getdata();

    // Using new keyword :
    // complex *ptr = new complex;

    // Using pointers :
    // (*ptr).setdata(1, 54);
    // (*ptr).getdata();

    // This is exactly same as by using arrow operator :
    //  ptr->setdata(1,54);
    //  ptr->getdata();

    // Arrow operator : used to derefrence the pointer and to run function of the object to which pointer points to.

    // here ptr points to an object from class complex so by using arrow operator '->' we can derefer the pointer to get that is_object
    // And then we can run the method of that object.

    // For Array of objects using new keyword :
    complex *ptr = new complex[4];

    // for complex[0];
    ptr->setdata(1, 4);
    ptr->getdata();

    // for complex[1];
    (ptr + 1)->setdata(4, 69);
    (ptr + 1)->getdata();

    // And so on....

    // For tracing the array of objects using for loop :

    // for (int i = 0; i < 4; i++)
    // {
    //     (ptr + i)->setdata(4, 69);
    //     (ptr + i)->getdata();
    // }
}

// Pointer's basic example :

// pointer is an variable which can store address of any variable.

//  int a = 4 ;
//  int* ptr = &a;

//  cout << "The value of a is : " << *(ptr) << endl;
//  cout << "The address of a is " << ptr ;

// here the '*' is a dereferencing operator which is used to print the value stored at particular address.

// New Opeator :

// 1. new : used to dynamically allocate the var with a value and address at the same time...
//          thus p will give the address of number '69' and *(p) will give us 69 which is the value stored at that address.

// int *p = new int(69);
// float*q = new float(69.69); we can identify new with various datatypes for example float.

// cout << "The value at address of p is : " << *(p) << endl;
//  cout << "The value at address of q is : " << *(q) << endl;

// To Allocate a block of memory i.e array :

// int *arr = new int[3];

// arr[0] = 10;
// arr[1] = 50;
// arr[2] = 80;

// for (int i = 0; i < 3; i++)
// {
//     cout << "The Value of arr[" << i << "] is " << arr[i] << endl;
// }

// 2. Delete Opeator : Used to delete the dynamically allocated block of memeory so the values of a var. are deleted and the var becomes
//                      avaliable to store values again .

// consider the above example of array

// int *arr = new int[3];

// arr[0] = 10;
// arr[1] = 50;
// arr[2] = 80;

// if we use delete keyword here the values of arr will get deleted and trash value will be filled instead.
// delete arr;  // for a single var.
// delete[] arr; // for an block of memory / array.

// for (int i = 0; i < 3; i++)
// {
//     cout << "The Value of arr[" << i << "] is " << arr[i] << endl;
// }

// Note : new and delete are keywords and operators too.