#include <iostream>
#include <cstring> // string library for C++ 
using namespace std;

class CWH
{
protected:
    float rating;
    string title;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    //  void display() {
    //      cout << "bogus code" << endl ;  thus if virtual is not used then this will execute.
    // }

    virtual void display(){}
    // virtual void display()=0; A Pue virtual function ... more on it in Abstract Base Class...
    
};

class CWH_VIDEO : public CWH
{
    float videolenght;

public:
    CWH_VIDEO(string s, float r, float vl) : CWH(s, r)
    {
        videolenght = vl;
    }
    void display()
    {
        cout << "THIS IS AN AMAZING VIDEO WITH TITLE : " << title << endl
             << "THIS VIDEO HAS LENGHT OF :" << videolenght << " MINUTES" << endl
             << " AND THIS VIDEO HAS RATING OF : " << rating << " OUT OF 5 STARS" << endl;
    }
};

class CWH_WEBSITE : public CWH
{
    int Wordcount;

public:
    CWH_WEBSITE(string s, float r, int wc) : CWH(s, r)
    {
        Wordcount = wc;
    }
    void display()
    {
        cout << "THIS IS AN AMAZING TEXT TUTORIAL : " << title << endl
             << "THIS TUTUORAL HAS LENGHT OF :" << Wordcount << " WORDS" << endl
             << "AND THIS TUTORAL HAS RATING OF : " << rating << " OUT OF 5 STARS" << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    // for CWH VIDEO :
    title = "This_is_C++_Tutorial";
    vlen = 5.12f;
    rating = 4.55;

    CWH_VIDEO TUT69(title, rating, vlen);
    // C_PLUS_PLUS_TUT69.display(); using direct method

    // CWH_VIDEO * vidpointer = &C_PLUS_PLUS_TUT69; using pointer method
    // vidpointer->display();

    // for CWH TEXT :
    title = "This_is_C++_Tutorial_NOTES";
    words = 350;
    rating = 4.77;

    CWH_WEBSITE TUT69_TEXT(title, rating, words);
    // C_PLUS_PLUS_TUT69_TEXT.display(); // using direct method

    // CWH_WEBSITE *WEBpointer = &C_PLUS_PLUS_TUT69_TEXT; // using pointer method
    // WEBpointer->display();

// Making Pointers to derived classes video and website :

    CWH *TUTS[2];
    TUTS[0] = &TUT69;
    TUTS[1] = &TUT69_TEXT;

    TUTS[0]->display();
    cout << endl;
    TUTS[1]->display();
}

// Rules for virtual functions : 
//                 1. they can't be static.
//                 2. they are accessed by object pointers.
//                 3. virtual functions can be a friend of another class.
//                 4. a function in base class might not be used I.e line 21 of this file.
//                 5. if a virtual function defiend in the base class , it is not necessary to redefining it in the derived class. 