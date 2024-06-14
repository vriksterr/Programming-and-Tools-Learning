/*

    *************************
    * Static/Const in Class *
    *************************
    In C++ classes we can have static and const for classes variables.

    Now as you can see in the example below we have foo which is defined inside a class but we cannot access it outside of class without the object and 
    function(if the data memeber of the class is also private) what we can do is we can use static in front of int foo; that will allow us to access this from anywhere
    as you can see in the example below.

    We can also use const to make sure that the value remains unchanged/unmodifiable


    Source: https://stackoverflow.com/questions/13274876/c-a-member-with-an-in-class-initializer-must-be-const
*/

#include<iostream>

//Creating a class
class MyClass{
  public:
  static int foo;                       // here we are defining the values outside the class
  static const int unchangable = 10;    // here we are doing it at the time of decleration and also its un-modifiable
};

//Declaring values of the class member foo outside class
int MyClass::foo = 10;

int main(void){
  MyClass foo1;
  std::cout<<"Accessing via object: "<<foo1.foo;
  std::cout<<"Accessing via scope operator and class variable defined as static: "<<MyClass::foo;  //as foo is private we can only modify it using std::string MyClass::foo = "Hello"; or to see it we can set it to public or use an object and a function that can access this private class
}