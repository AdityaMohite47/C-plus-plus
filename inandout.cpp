// io here is input and ouput and stream is refered as sequence of bytes corresponding to input output.

// input stream : direction of flow of bytes is form input device (keyboard) to main memory.
// output stream : direction of flow of bytes is form main memory to output device (display).

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, b;
    // cout<<  <<  ; '<<' this is called Insertion operator. It displays to user.

    cout << "Enter the value for 'a':  \n ";

    //  cin >> ; '>>' this is called Extraction operator . It takes form user. scanf form c

    cin >> a;

    cout << "Enter the value for 'b':  \n ";
    cin >> b;

    cout << "\n The sum of a and b is \n"
         << a + b;


}