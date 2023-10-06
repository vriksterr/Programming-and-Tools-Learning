/* 

Typing basic commands to take input and show output of the taken input of the program 
HERE IS THE LINK OF C++ Keywords: https://en.cppreference.com/w/cpp/keyword

In C++ programs are read by COMPILERS from top to bottom in a series while compiling and look here fow which Compiler is supporting a feature
based on the c++ version you are using: https://en.cppreference.com/w/cpp/compiler_support


int age {21} is c++11 list initialization syntax
float
double
string

- {} curly brackets holds value,data,instruction/defination  it also helps in seeing narrowing 
- () paranthesis holds parameters meaning what values a function will need like (int a) for its instruction to execute
Parameter means for eg
With int a b c as parameter do addition or substraction on these by being within this a b c cant get d which is not in parameter

*/
#include <iostream>

int main(){  //Execution always with the main function also read what is int main(void) here https://www.geeksforgeeks.org/difference-int-main-int-mainvoid/
   
        int fav_number{}; // {} = {0} if you dont use {} the value there will be random and non-zero
        std::cout<<"Welcome to our program!"<<std::endl;
        std::cout<<"We are playing a game today! Can you please tell me your Fav number : ";
        std::cin>>fav_number;
        std::cout<<"WOW "<<fav_number<<" is my fav number too !"<<std::endl;
        return 0; /* What happens if you don’t use return 0; ?
                     return 0; is used in main funtion to check weather the program executed correctly or not, this info is used by operating system if the program 
                     finished perfectly or not if it dosent finish that means there is some issue in the program and os gets to know that the program didnt finish
                     correctly. In many cases you will see that programmers not adding return 0; in those cases the compiler self adds return 0; at the end of the 
                     main funtion during compile time. Tho its a good practice to add it yourself in every programe.
                  */
}