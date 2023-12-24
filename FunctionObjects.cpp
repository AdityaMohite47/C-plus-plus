// What are Functors / Function Objects ? : Function wrapped in a class so that it is avaliable like an object.
//                                          to use them we need to include <Functional>

#include <iostream>
#include <functional>
#include <algorithm>
int main()
{
    int arr[] = {69, 76, 33, 22, 90, 5};
    std::sort(arr, arr + 6); // this function can sort a range of elements in an array or vector / list , arr+6 means that from arr upto arr+6
                             // elements in the container will be sorted rest will be not sorted...

    for (size_t i = 0; i < 6; i++)
    {
        std::cout << arr[i] << std::endl;
    }

    // The sort can be descending by this code : 
    std::sort(arr , arr+6 , std::greater<int>());

     std::cout << " " << std::endl << "The Descending Version of this array is : " << std::endl ;

 for (size_t i = 0; i < 6; i++)
    {
        std::cout << arr[i] << std::endl;
    }

}