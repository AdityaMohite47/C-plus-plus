// We knowed that classes are the templates for object creation but some templates can be used for creation too ...

// These templates which serve as template for creation of classses are also known as Parameterized classes

// Why we use templates ?

// -> For following DRY["Don't Repeat Yourself"] Principle which reduces code redundancy
// -> These templates support Generic Programming i.e A template can serve as a template for creation of multiple classes of different
//     types but of same functionality... Ex. a template for classes with different datatypes but of same functionality...

// Syntax for template :

//     template<classt>

//     class <name> {
//         t*<member>;   t can be int , char , float etc datatype...
//        public:
            /* code */
//     };

//   int main(){
//   class-name <datatype> object ;
//}

#include <iostream>
using namespace std;

template <class T> // here T will be sepcified later as a datatype...
class vector
{
    int size;

public:
    T *arr; // array of the datatype which will be speicfied later on
    vector(int m)
    {
        size = m;
        arr = new T[size]; // occupy the size according to the datatype which will be specified later
    }
    T dotproduct(vector &v) // the method is defined according to the datatype specified later , this method takes object of vector class
    {
        T d = 0; // adjusting  dot product according to datatype specified later
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i]; // 'this' here points to v1 and v.arr to the array of the object passed to the method.
        }
        return d;
    }
};

int main()
{
    vector<float> v1(3); // specifying the datatypes
    v1.arr[0] = 1.4;
    v1.arr[1] = 3.3;
    v1.arr[2] = 0.1;

    vector<float> v2(3);
    v2.arr[0] = 0.1;
    v2.arr[1] = 1.90;
    v2.arr[2] = 4.1;

    float a = v1.dotproduct(v2);

    cout << a << endl;

    vector<int> v1b(3); // specifying another datatype for the same class
    v1b.arr[0] = 4;
    v1b.arr[1] = 3;
    v1b.arr[2] = 1;

    vector<int> v2b(3);
    v2b.arr[0] = 1;
    v2b.arr[1] = 0;
    v2b.arr[2] = 1;

    int b = v1b.dotproduct(v2b);

    cout << b << endl;
}