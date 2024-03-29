/*

    *****************************
    * Scope resolution operator *
    *****************************

    The :: (scope resolution) operator
    It is used to access members (variables or functions) of a class or namespace. The scope resolution operator allows you to specify 
    the namespace or class from which you want to access a particular member.

      In C++, the scope resolution operator is ::. It is used for the following purposes.
       -> To access a global variable when there is a local variable with same name
       -> Accessing Class Members
       -> Accessing Namespace Members
    Source: https://www.youtube.com/watch?v=59fy7la7yEI
            https://www.geeksforgeeks.org/scope-resolution-operator-in-c/
            https://stackoverflow.com/questions/13274876/c-a-member-with-an-in-class-initializer-must-be-const

*/

#include <iostream>
using namespace std;

namespace custom{
      int y = 69;
      int custom_namespace_func(){return 1+1;}
}

class X
{
public:
      static int count;              // To understand static and constant better refer to in Funtion -> Static and Constant Functions

      void fun() { 
            cout << "fun() called" << endl; 
      }

      void static fun2() {
            cout << "fun2() called" << endl; 
      }
};

int X::count = 10;                   // Define static data member
int y = 20;

int main ()
{   //X::fun();                      // This wont work but the below one will coz reason given by compiler "a nonstatic member reference must be relative to a specific object"
      X::fun2();                     // This works as the function is Static not like the above one which is non-static, for non-static member functions you need an object.

      X::count = 0;                  // Now in Class we access its variables using an object but we can also use the scope resolution operator and refer to the class this way without creating the object
      int y = 30;
      cout << X::count << endl;      // use static member of class X
      cout << ::y <<endl;            // here y is being refered to global variable when it is not a local variable.
      cout << custom::y <<endl;      // here we using :: to access custom namespace variables
      cout << custom::custom_namespace_func() <<endl;
}

//Another example
// int count = 0;

// int main(void) {     //https://www.geeksforgeeks.org/difference-int-main-int-mainvoid/
//   int count = 0;
//   ::count = 1;       // set global count to 1
//   count = 2;         // set local count to 2
//   return 0;
// }