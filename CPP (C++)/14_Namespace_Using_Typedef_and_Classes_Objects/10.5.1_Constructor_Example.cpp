// Video is from CodeWithHarry https://www.youtube.com/watch?v=EEJUPXFKe8Q
#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    // Creating a Constructor
    // Constructor is a special member function with the same name as of the class.
    // It is used to initialize the objects of its class
    // It is automatically invoked whenever an object is created
  
    Complex(void){ // Constructor declaration
    a = 10;
    b = 0;
    cout<<"Hello world"<<endl;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};



int main()
{
    Complex c1, c2, c3;     //see the output on each new object the constructor is invoked
    // c1.printNumber();
    // c2.printNumber();
    // c3.printNumber();
    cout<<"Hello world"<<endl;

    return 0;
}