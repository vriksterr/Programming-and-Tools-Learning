/*

    *****************************
    * Scope resolution operator *
    *****************************

    The :: (scope resolution) operator is used to qualify hidden names so that you can 
    still use them. You can use the unary scope operator if a namespace scope or global 
    scope name is hidden by an explicit declaration of the same name in a block or class

*/

#include <iostream>
using namespace std;

class X
{
public:
      static int count;
};
int X::count = 10;                // define static data member

int main ()
{
      int X = 0;                  // hides class type X
      cout << X::count << endl;   // use static member of class X
}

//Another example
// int count = 0;

// int main(void) {
//   int count = 0;
//   ::count = 1;  // set global count to 1
//   count = 2;    // set local count to 2
//   return 0;
// }