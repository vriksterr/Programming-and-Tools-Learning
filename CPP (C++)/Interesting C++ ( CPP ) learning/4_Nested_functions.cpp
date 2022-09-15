// C++ Nested functions can only be done within a class itself
// Reference: http://www.gotw.ca/gotw/058.htm
#include<iostream>
using namespace std;

void test3(), test4();  // We can do this as well for global declerations
class IntClass;

class OutClass;
OutClass B;
OutClass *pointer_to_class;

int main(){

    // We can declare a class within main() function but we have to declare it in global scope
    class IntClass
    {
    public:
        void test1(){cout<<"Hello";}
        void test2(){cout<<" Welcome!"<<endl;}
    };
    
    IntClass A;
    A.test1();
    A.test2();

    
    B.test1();
    B.test2();

    test3();
    test4();
}

class OutClass{
    public:
        void test1(){cout<<"Hello";}
        void test2(){cout<<" Welcome!"<<endl;}
    };

void test3(){
    cout<<"Test3"<<endl;
}
void test4(){
    cout<<"Test4"<<endl;
}