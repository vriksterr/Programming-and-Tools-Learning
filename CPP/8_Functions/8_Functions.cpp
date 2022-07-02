/*  

        ************ 
        * Funtions *
        ************
    
    What is a funtion?

    C++ will have atleast one function that is tha main() function we can multiple functions which can be void name () where void
    specifies that the function will not return anything back the things inside () are attributes of that function and can be blank
    or can be specified based on the function requirement. These functions allow us to reuse the same code defined in function
    multiple times without having to type it over and over again.

        These funtions can be user defined or predefined by C++ commity

        -C++ programs
            -C++ Standard Libraries (functions and classes)
            -Third-party libraries (functions and classes)

        -Functions allow the modularization of a program
            -Seprate code into logical self-contained units
            -These units can be reused
            -These functions are envoked only when the program calls for it

        -Boss/Worker analogy
            -Write your code to the function specification
            -Understand what the function dose
            -Understand what information the function needs
            -Understand what the function returns
            -Understand any errors the function may produce
            -Understand any performace constraints

            -Dont worry about HOW the function works internally
                -Unless you are the one writing the function!

    One best example can be <cmath> library where to do common mathematical calculations global functions called such as :

    cout<< sqrt (400.0) << endl;    //20 is the square root of 200
    double result;
    result= pow(2.0,3.0)            // 2.0 ^ 3.0

    As you can see c++ liberary also have there own defined functions for programmers to use to ease the process of programming

    Link for C++ Standaard Library Headers -> https://en.cppreference.com/w/cpp/header
    
    If you go check the above link and go to some specific header like <cmath> and open it you will see whole bunch of predefinded funtions whice 
    do a certain tasks while providing code abstraction

*/

#include<iostream>
#include<cstdlib>   //required for rand()
#include<ctime>     //required for time()

using namespace std;

int main(){

    int random_number{};
    size_t count {10};      // number of random numbers to generate
    int min{1};             // lower bound (inclusive)
    int max{6};             // upper bound (inclusive)

    // seed the random number generator
    // if you dont seed the generator you will get the same sequence random numbers every run

    cout<<"RAND_MAX on my system is: "<< RAND_MAX <<endl;
    srand(time(nullptr));

    for(size_t i {1} ; i<=count ; ++i){
        random_number = rand() % max + min; //generate a random number[min, max]
        cout << random_number << endl;
    }

    cout<<endl;
    return 0;
}