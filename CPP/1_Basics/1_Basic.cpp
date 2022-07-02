/* 

Typing basic commands to take input and show output of the taken input of the program 
HERE IS THE LINK OF C++ Keywords: https://en.cppreference.com/w/cpp/keyword

In C++ programs are read by compiler from top to bottom in a series while compiling

*/

/*

int age {21} is c++11 list initialization syntax
float
double
string

*/
/*
- {} curly brackets holds value,data,instruction/defination  it also helps in seeing narrowing 
- () paranthesis holds parameters meaning what values a function will need like (int a) for its instruction to execute
Parameter means for eg
With int a b c as parameter do addition or substraction on these by being within this a b c cant get d which is not in parameter

*/
#include <iostream>

int main()  //Execution always with the main function
    { int fav_number{}; // {} = {0} if you dont use {} the value there will be random and non-zero
        std::cout<<"Welcome to our program!"<<std::endl;
        std::cout<<"We are playing a game today! Can you please tell me your Fav number : ";
        std::cin>>fav_number;
        std::cout<<"WOW "<<fav_number<<" is my fav number too !"<<std::endl;
        return 0; /* What happens if you don’t use return 0?

                    Short Answer: Nothing.
                    Better Answer: return 0 it's used in main like a signal for know the exit of program was a success when return 0 executes.
                    Best Answer: Still nothing because compilers already "put" return 0 in the the end of your code if you not explicit. But still use is a good practice and give better readbility for your code because is a pattern.
                  */
    }