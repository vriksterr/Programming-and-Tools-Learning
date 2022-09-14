// C++ Nested functions can be done within a class itself
#include<iostream>
using namespace std;

//void test1(), test2();  // We can do this as well for global declerations


int main(){

    // We can declare a class within main() function but we have to declare it in global scope
    class IntClass
    {
    public:
        void test1(){cout<<"Hello";}
        void test2(){cout<<" Welcome!";}
    };
    
    IntClass A;
    A.test1();
    A.test2();
}