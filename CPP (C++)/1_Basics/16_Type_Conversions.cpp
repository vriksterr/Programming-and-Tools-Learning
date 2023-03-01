/*
    ********************
    * Type Conversions *
    ********************
    Converting a value of one data type to another data type
    There are of 2 types:
        Implicit = automatic
        Explicit = Precede value with new data type (int)

    C++ supports four types of casting:

        1. Static Cast
        2. Dynamic Cast
        3. Const Cast
        4. Reinterpret Cast

    Also Refer to Type Punning in Classes and Objects

    Source: https://www.geeksforgeeks.org/dynamic-_cast-in-cpp/
            https://www.programiz.com/cpp-programming/type-conversion
*/
#include<iostream>
using namespace std;

int main(){
    int value1 = 3.14;               //Implicit type conversion where its automatically getting rounded to integer
    double value2 = (int) 3.14;      //Explicit type conversion were 3.14 got converted to int type and then stored to double
    double value3 = (int) "Hello";  //Here text is being converted  to integer and then stored in double

    cout<<"Value 1: "<<value1<<endl;
    cout<<"Value 2: "<<value2<<endl;
    cout<<"Value 3: "<<value3<<endl;
}