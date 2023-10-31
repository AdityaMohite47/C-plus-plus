#include <iostream>
using namespace std;

class Base
{
    int b; // we want 'b' to be private
protected:
    int a; // we want 'a' to be confiendtial and also want to inherit it in another.
};

/*

Derivation of members and how they are inherited

                                      D E R I V E D  C L A S S 
      _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
 B   |    MEMBERS      | IN PUBLIC DERV.  |IN PRIVATE DERV.| IN PROTECTED DREV.|
 A    _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
 S   |  1. Private     |  NOT INHERITED   |  NOT INHERITED |    NOT INHERITED  |
 E    _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
     |  2. Public      |      PUBLIC      |    PRIVATE     |    PROTECTED      |
 C    _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
 L   |  3. Protected   |     PROTECTD     |    PRIVATE     |    PROTECTED      |
 A    _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ 
 S
 S
 
*/

class Derived : protected Base
{
};

int main()
{
}
// 