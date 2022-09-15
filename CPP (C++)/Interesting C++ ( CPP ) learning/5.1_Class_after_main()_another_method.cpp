//Reference: https://stackoverflow.com/questions/15734472/c-class-declaration-after-main#:~:text=The%20compiler%20has%20to%20be,header%20file%20which%20you%20include.&text=why%20is%20this%20not%20the%20case%20for%20functions%3F&text=It%20is%2C%20you%20can't,it%20to%20the%20compiler%20either.

#include<iostream>
using namespace std;

//Class Prototype
class Calculator { // defines the class in advance
public:
    Calculator(); // defines the constructor in advance
    ~Calculator(); // defines the destructor in advance
};

int main(){

}

//CLass Defination 
Calculator::Calculator(){ // now implement the constructor
}
Calculator::~Calculator(){ // and destructor
}