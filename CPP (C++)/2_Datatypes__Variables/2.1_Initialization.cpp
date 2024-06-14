/*
    *************************
    * Initialization in CPP *
    *************************
    There are 3 ways you can initialize values in C++
    •Direct Initialization - Using () : Direct initialization uses parentheses to initialize a variable. This method is often preferred because it can 
                                        avoid certain ambiguities and unexpected behavior associated with other forms of initialization.
                                        ```
                                        int a(10);         // Directly initializes an integer variable 'a
                                        ```
    
    •Copy/Assignment Initialization - Using = : Copy initialization uses the assignment operator to initialize a variable. This method can sometimes invoke the copy constructor for user-defined 
                                                types, and it can be less efficient than direct initialization due to potential extra copies.
                                                ```
                                                int a = 10;           // Copy initializes an integer variable 'a' with the value 10
                                                double d = 5.5;       // Copy initializes a double variable 'd' with the value 5.5
                                                std::string s = "Hello"; // Copy initializes a string object 's' with the value "Hello"
                                                ```
    •List/Braced Initialzation - Using {} : List initialization uses braces {} to initialize variables and is part of the Uniform Initialization syntax introduced in C++11. It provides a 
                                            consistent way to initialize containers, aggregates, and user-defined types. List initialization helps prevent narrowing conversions, which 
                                            can lead to data loss or unexpected behavior.
                                            ```
                                            int a{10};               // List initializes an integer variable 'a' with the value 10
                                            double d{5.5};           // List initializes a double variable 'd' with the value 5.5
                                            std::string s{"Hello"};  // List initializes a string object 's' with the value "Hello"

                                            // List initialization with multiple values (for aggregates or containers)
                                            std::vector<int> v{1, 2, 3, 4, 5};  // List initializes a vector with values 1, 2, 3, 4, 5

                                            // Preventing narrowing conversion
                                            int x{3.14};             // Error: narrowing conversion from double to int
                                            ```
                                            ```
                                            #include <iostream>

                                            int main(){
                                            int myint(3.14);                              //compiler will allow and narrowing error wont be shownthis this method is called Function variable initialization
                                            std::cout << "myint: " << myint << std::endl;

                                            int myint1{3.14};                             //will throw error for narrowing so this wont compile
                                            std::cout << "myint: " << myint1 << std::endl;

                                            }
                                            ```
                                            In the code above, the compiler compiles line 4 even though it is converting a decimal number to an 
                                            integer. This results in a loss of accuracy. However, when the same initialization is done using
                                            braces in line 7, the compiler generates an error that alerts the user to the occurrence​ of narrowing.



    Also: https://www.geeksforgeeks.org/uniform-initialization-in-c/

    Uniform initialization is a feature in C++ 11 that allows the usage of a consistent syntax to initialize variables and objects ranging from primitive type to aggregates. In other words, it introduces brace-initialization that uses braces ({}) to enclose initializer values. The syntax is as follows:

    type var_name{arg1, arg2, ....arg n}
    Following are some of the examples of the different ways of initializing different types:

    // uninitialized built-in type
    int i;    

    // initialized built-in type
    int j=10; 

    // initialized built-in type
    int k(10);

    // Aggregate initialization
    int a[]={1, 2, 3, 4} 

    // default constructor
    X x1; 

    // Parameterized constructor
    X x2(1); 

    // Parameterized constructor with single argument
    X x3=3; 

    // copy-constructor
    X x4=x3; 



    If initialized using brace initialization, the above code can be re-written as: 

    int i{};     // initialized built-in type, equals to int i{0};

    int j{10}; // initialized built-in type

    int a[]{1, 2, 3, 4} // Aggregate initialization

    X x1{}; // default constructor

    X x2{1}; // Parameterized constructor;

    X x4{x3}; // copy-constructor

*/

#include <iostream>
using namespace std;


class School{
private:
int m{},v{};
public:
    School(int marks,int value):m{marks+10},v{value}{
        cout<<m<<endl;
    }
};

class Foo
{
public:
    Foo(int a, char b) {}
};


int car(int a,int b, int c){
    return a;
}

void func(Foo a)
{}

int main(){

    int marks{100}; //vs {} vs watch this https://www.educative.io/answers/declaring-a-variable-with-braces-in-cpp

    School rohit(100,{200});

    cout<<"main() marks is : "<<marks<<endl;

    car({(100+200)/2},(5.65 + 66), {69});    // to avoide from narrowing use {} so compiler will throw an error

    func({2, 'c'}); // It is a new feature added in c++11. It allows you to instantiated a object just passing its constructor arguments.

}