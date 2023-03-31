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
    
    char value1 = 3;                                //Implicit type conversion where its automatically getting rounded to a character according to ascii table here https://upload.wikimedia.org/wikipedia/commons/d/dd/ASCII-Table.svg
    //or
    cout<<endl<<"conversion: "<<(char)100<<endl;    //This is also implicit conversion
    double value2 = (int) 3.14;                     //Explicit type conversion were 3.14 got converted to int type and then stored to double
    int value3 = (int) 'Hello';                      //Wont work when using "" have to use ''(maybe "" is not defined) in this example more than 1 character is showing a warning "warning: multi-character character constant [-Wmultichar]"
    int value4 = (int) 'V';                         //This is converting text to interger based on ASCII table

    cout<<"Value 1: "<<value1<<endl;
    cout<<"Value 2: "<<value2<<endl;
    cout<<"Value 3: "<<value3<<endl;
    cout<<"Value 4: "<<value4<<endl;
}