/*

    *****************************
    * Scope resolution operator *
    *****************************

    The :: (scope resolution) operator
    Read more from the source for better detail.

    Source: https://www.youtube.com/watch?v=59fy7la7yEI
            https://www.geeksforgeeks.org/scope-resolution-operator-in-c/
            https://stackoverflow.com/questions/13274876/c-a-member-with-an-in-class-initializer-must-be-const

*/

#include <iostream>
using namespace std;

class X
{
public:
      static int count;           // to understand static and constant better refer to in Funtion -> Static and Constant Functions
};
int X::count = 10;                // define static data member

int main ()
{
      X::count = 0;                  // hides class type X
      cout << X::count << endl;   // use static member of class X
}

//Another example
// int count = 0;

// int main(void) {     //https://www.geeksforgeeks.org/difference-int-main-int-mainvoid/
//   int count = 0;
//   ::count = 1;  // set global count to 1
//   count = 2;    // set local count to 2
//   return 0;
// }

//Another Example Related to Class
