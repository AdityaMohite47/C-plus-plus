// STL : It stands for Standard Template Library... It is the library of Generic Classes And Functions...

//     STL is used because "it's a good idea , not to reinvent the wheel..."

//     1 Why STL :
//         Reusing well-tested classes to reduce chances of errors , which also saves time...

//     2. Components of STL :
//                     a) Containers -> object which stores data having some qualites which make them different from arrays and variables...
//                                     Also these containers use template classes...

//                                     There are 3 types of Containers :
//                                                 I) Sequence Containers -> they store data in linear fashion [i.e in continuous way]
//                                                                          Ex. Vector , List , Dequeue

//                                                II) Associative Containers -> they store data in such a way which we can get fastest access to the data
//                                                                              stored (tree like structure)
//                                                                              [ i.e direct access , deletion etc.] Ex. Set , Multiset , Map , MultiMap

//                                               III) Derived Containers -> they can be derived from sequence containers or from assocative containers.
//                                                                          they store data like we model data in real time.
//                                                                            Ex. Queue , Stack [LAST IN FIRST OUT] , Priority Queue

//                                                use a Container ??
//                                                          Sequence :
//                                                      1. Vector has fast Random Access , Insertion and Deletion is slow And Insertion and Deletion at end is fast.
//                                                      2. List has slow Random Access , fast Insertion and Deletion.

//                                                          Associative :
//                                                      All opeations are fast except Random Access.

//                                                        Derived :
//                                                      speed of all operations depends on the opeations.

//                     b) Algorithms -> Set of procedures we use to for data manipulation to arrive at solution of a particular problem...
//                                     they use template functions...

//                     c) Iterators  -> Objects which points to a element in the container , they are handled like pointers...
//                                     uses Algorithms to connect with an element in a container... , And moves to the values as per
//                                     Instructions by the Algorithm...

//          Code in STL

//          Vectors in C++

//      Why Vector ?? -> we can't increase the size of a defined array as per our need. In vector size is automatically managed...

#include <iostream>
#include <vector> // file included to used vector
using namespace std;

template <class T>
void display(vector<T> &v)
{
    cout << "Displaying This Vector" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        // cout << v.at(i) << " ";
    }
    cout << endl;
}

int main()
{

    // Ways to create vector :
    vector<int> vec;         // zero length vector
    vector<int> vec2(4);     // integer vector
    vector<char> vec3(4);    // char vector
    vector<char> vec4(vec3); // char vector from vec3
    vector<int> v(6, 69);    // a vector storing integer 3 , 6 times.
    int element, size = 5;

    vector<int>::iterator iter = v.begin();
    v.insert(iter + 3, 96);
    display(v);
   // cout << v.size() << endl;

    // cout << "Enter the size of your vector" << endl;
    // cin >> size;

    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter a value for the element" << endl;
    //     cin >> element;
    //     vec.push_back(element); // adds element at end of the vector
    // }

    // vector.pop_back(); // removes end element of the vector

    // vector<int>::iterator iter = vec.begin(); // making an iterator to iterate through values of the vector...
    // display(vec);
    //  vec.insert(iter+1,5, 69); // insert 69 5 times from iter+1 position
    // display(vec);
}
