// class CWH
// {
// protected:
//     float rating;
//     string title;

// public:
//     CWH(string s, float r)
//     {
//         title = s;
//         rating = r;
//     }
//     //  void display() {
//     //      cout << "bogus code" << endl ;  thus if virtual is not used then this will execute.
//     // }

//     virtual void display(){}

// };

// class CWH_VIDEO : public CWH
// {
//     float videolenght;

// public:
//     CWH_VIDEO(string s, float r, float vl) : CWH(s, r)
//     {
//         videolenght = vl;
//     }
//     void display()
//     {
//         cout << "THIS IS AN AMAZING VIDEO WITH TITLE : " << title << endl
//              << "THIS VIDEO HAS LENGHT OF :" << videolenght << " MINUTES" << endl
//              << " AND THIS VIDEO HAS RATING OF : " << rating << " OUT OF 5 STARS" << endl;
//     }
// };

// class CWH_WEBSITE : public CWH
// {
//     int Wordcount;

// public:
//     CWH_WEBSITE(string s, float r, int wc) : CWH(s, r)
//     {
//         Wordcount = wc;
//     }
//     void display()
//     {
//         cout << "THIS IS AN AMAZING TEXT TUTORIAL : " << title << endl
//              << "THIS TUTUORAL HAS LENGHT OF :" << Wordcount << " WORDS" << endl
//              << "AND THIS TUTORAL HAS RATING OF : " << rating << " OUT OF 5 STARS" << endl;
//     }
// };

// int main()
// {
//     string title;
//     float rating, vlen;
//     int words;

//     title = "This_is_C++_Tutorial";
//     vlen = 5.12f;
//     rating = 4.55;

//     CWH_VIDEO TUT69(title, rating, vlen);

//     title = "This_is_C++_Tutorial_NOTES";
//     words = 350;
//     rating = 4.77;

//     CWH_WEBSITE TUT69_TEXT(title, rating, words);

//     CWH *TUTS[2];
//     TUTS[0] = &TUT69;
//     TUTS[1] = &TUT69_TEXT;

//     TUTS[0]->display();
//     cout << endl;
//     TUTS[1]->display();
// }

// In this condition virtual functions where used to invoke the functions of the derived class(derived from a base class)
//     through a pointer of a base class pointing to the object of derived class....

//  class CWH was intentionally made for making two classes CWH video and CWH Website thus the classes made for the sloe purpose to serve as an
//  medium for inheritance or refrence is Abstract Base Class...

// if class CWH is Abstract Base Class then it should contain an Virtual Function which should get overwrite and it is necessary or code throws error.

// Now if I need the virtual function which should always get overwrite and then in that case we need pure virtual funcion : 

//   code : virtual <datatype> <function-name> () = 0 ; This is a do-nothing function or A pure Virtual Function 
//                                                      A pure virtual function needs a function in derived class to overwrite it...

// A class designed not for making objects but for serving a template for inheriting classes is An Abstract Base Class And these type of classes 
// have functions which must get overwrite and it is A Pure Virtual Function...

#include <iostream>
using namespace std;

int main()
{

}