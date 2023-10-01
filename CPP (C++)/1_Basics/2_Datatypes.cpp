/*
    ********************
    * Datatypes in C++ *
    ********************

    In Cpp there are 3 types of datatypes
    1- Primary (int, char, bool, float, double, void):
                These are predefined datatypes in the compiler itself and are fixed and cannot be changed (can only be changed in compiler itself by editing the code of compiler)
                if you want to have your own defined datatype use UserDefined data types.

    2- Derived (Function, Array, Pointers, Reference):
                The data-types that are derived from the primitive or built-in datatypes are referred to as Derived Data Types

    3- User Defined (Class, Structure, Union, Enum, Typedef/Using)


    Source: https://www.quora.com/How-does-one-increase-the-size-of-an-integer-in-C++
            https://www.quora.com/An-integer-has-2-bytes-in-C-Why#:~:text=So%2C%20size%20of%20int%20data,to%20keep%20it%20in%20memory.
            https://stackoverflow.com/questions/61411865/how-do-you-use-clangs-new-custom-size-int-feature
            http://blog.llvm.org/2020/04/the-new-clang-extint-feature-provides.html
            https://stackoverflow.com/questions/2331751/does-the-size-of-an-int-depend-on-the-compiler-and-or-processor
            https://www.geeksforgeeks.org/user-defined-data-types-in-c/
            https://www.geeksforgeeks.org/derived-data-types-in-c/
            https://prepinsta.com/c-plus-plus/predefined-datatypes/
*/
#include<iostream>

int main(){
    float number1 = (float)1.12345678901234567890;
    float number2 = 1.12345678901234567890;
    double number3 = 1.12345678901234567890;
    long double number4 = 1.1234567890234567890L;

    /*Now you will notice that in above variable assignment of values i have put f and L and in one case i havenot the reason for such is that the compiler will consider
    that number to be a double and then convert it to float and during this conversion it can chop of some of the values so what we do instead is that we define that the
    number is a float so there no type conversion done by the compiler*/

    std::cout<<"Float number with f at the end of number is: "<<number1<<std::endl;
    std::cout<<"Float number with f at the end of number is: "<<number2<<std::endl;
    std::cout<<"Float number with f at the end of number is: "<<number3<<std::endl;
    std::cout<<"Float number with f at the end of number is: "<<number4<<std::endl;


}