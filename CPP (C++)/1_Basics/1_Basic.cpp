/* 
    *****************
    * Basics of C++ *
    *****************
    Typing basic commands to take input and show output of the taken input of the program 
    HERE IS THE LINK OF C++ Keywords: https://en.cppreference.com/w/cpp/keyword

    In C++ programs are read by COMPILERS from top to bottom in a series while compiling and look here fow which Compiler is supporting a feature
    based on the c++ version you are using: https://en.cppreference.com/w/cpp/compiler_support


    int age {21}; is c++11 list initialization syntax
    float
    double
    string

    - {} curly brackets holds value,data,instruction/defination  it also helps in seeing narrowing when you pass a value/data that is not same as variable 
      so it gets converterted to the type that the variable is.
    - () paranthesis holds parameters meaning what values a function will need like (int a) for its instruction to execute
    Parameter means for eg
    With int a b c as parameter do addition or substraction on these by being within this a b c cant get d which is not in parameter

     __________________
    | Librarys of C++ |
    |_________________|
    Link for C++ Standaard Library Headers -> https://en.cppreference.com/w/cpp/header
    
    The standard library (that is part of the language) has been written exclusively in C++. Also the big mayority of libraries are written in C++.
    However C++ implements an easy way to incorporate libraries written in other languages. On this way, there are several libraries written in other languages like C or Fortran, for instance.
    
    basically a library like <algorithm>, <imgui>, etc which provide abstraction and allow programmers to
    achieve complex tasks without typing complex code

    To understand it in a deeper way these liberaries provide an abstrations to the programmer for example <imgui>
    liberary where if your use box::___ you can create a box now in this case you didnt had to write all the code that
    was required to make that box same way in <algorithm> where we type what calculations to perform without writing 
    the algorithm ourselfs.

     ___________
    | Comments |
    |__________|
    In C++ you can have single line comment with // and have multiline comment like we 
    are in one right now but you cannot do nesting of comment meaning your cannot have
    1 multiline comment inside another multiline one tho its not the case for single 
    line but either way dont do comment nesting as its meaningless.

     _________
    | Errors |
    |________|
    In C++ we can have 
    1.Compile time errors: Errors which gets spotted at the time of compiling this 
                           are the bugs that the compiler catches can be anything from
                           syntax errors, variable naming and more. 
    2.Runtime Errors: These errors are spotted during the execution of the program and 
                      mostly consists of missing/wrong logic in some cases the programe
                      will continue to run normally with wrong output but in same cases
                      like a number divided by 0 the programe is going to crash.
    3.Warnings: These are the warnings the compiler tells you so you can fix you program
                tho these warnings dont mean your code wont compile some examples can
                be unused variable, things which can be out of limit/scope, exceding
                the limit of a variable/logic(divide by 0) etc.

*/
#include <iostream>   //Library
#include <limits> // Include this header for std::numeric_limits
#include <string>     //Library used for multiple characters
using namespace std;  //namespace
int main(){  //Execution always starts with the main function also read what is int main(void) here https://www.geeksforgeeks.org/difference-int-main-int-mainvoid/
   
        int fav_number{}; // {} = {0} if you dont use {} the value there will be random and non-zero
        std::cout<<"Welcome to our program!"<<std::endl;  // endl ends the line and starts printing from a new one same is for \n that is used i C
        std::cout<<"We are playing a game today! Can you please tell me your Fav number : ";
        std::cin>>fav_number;
        std::cout<<"WOW "<<fav_number<<" is my fav number too !"<<std::endl;

        std::string full_name;
        std::cout<<"Whats your name? : ";
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear the input buffer
        std::getline(std::cin, full_name);   //getline is used to get the entire string in cmd line even if it includes spaces
        std::cout<<"Welcome to the course "<< full_name <<" hope you enjoy and learn a lot."<<endl;
        
        return 0; /* What happens if you don’t use return 0; ?
                     return 0; is used in main funtion to check weather the program executed correctly or not, this info is used by operating system if the program 
                     finished perfectly or not if it dosent finish that means there is some issue in the program and os gets to know that the program didnt finish
                     correctly. In many cases you will see that programmers not adding return 0; in those cases the compiler self adds return 0; at the end of the 
                     main funtion during compile time. Tho its a good practice to add it yourself in every programe.

                     Also Return returns to the funtion in this case its the int main() function.
                  */
}