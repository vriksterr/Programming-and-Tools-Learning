/*
    ********************
    * Type Conversions *
    ********************
    Converting a value of one data type to another data type
    There are of 2 types:
        Implicit = Automaticly done by the compiler on its own, without any external trigger from the user. All the data types of the variables are upgraded to the data type of the variable with the largest data type.
        Explicit = Precede value with new data type (int)
    
    Variables data size:
        bool -> char -> short int -> int -> unsigned int -> long -> unsigned -> long long -> float -> double -> long double
        
        where bool is the smallest and long double is the largest data variable. So when doing type conversions the largest variable will be preferred and any smaller variable
        will be converted to the largest present variable

    C++ supports 4 additional types of casting: (these dont really do anythying different what the C style implicit/explicit type casting dose but it dose provide extra checks by compiler)

        1. Static Cast - its is same as explecit type casting where we write it as static_cast<int>(10.56)
        2. Dynamic Cast - can be used only with pointers and references to objects. Its purpose is to ensure that the result of the type conversion is a valid complete object of the requested class.
        3. Const Cast - it is used to add of remove const, you can add const anyway but its mostly for removing const
        4. Reinterpret Cast
    
    Advantages of Type Conversion
        -Type safety: Type conversions can be used to ensure that data is being stored and processed in the correct data type, avoiding potential type mismatches and type errors.
        -Improved code readability: By explicitly converting data between different types, you can make the intent of your code clearer and easier to understand.
        -Improved performance: In some cases, type conversions can be used to optimize the performance of your code by converting data to a more efficient data type for processing.
        -Improved compatibility: Type conversions can be used to convert data between different types that are not compatible, allowing you to write code that is compatible with a wider range of APIs and libraries.
        -Improved data manipulation: Type conversions can be used to manipulate data in various ways, such as converting an integer to a string, converting a string to an integer, or converting a floating-point number to an integer.
        -Improved data storage: Type conversions can be used to store data in a more compact form, such as converting a large integer value to a smaller integer type, or converting a large floating-point value to a smaller floating-point type.
    Disadvantages of type conversions in C programming:
        -Loss of precision: Converting data from a larger data type to a smaller data type can result in loss of precision, as some of the data may be truncated.
        -Overflow or underflow: Converting data from a smaller data type to a larger data type can result in overflow or underflow if the value being converted is too large or too small for the new data type.
        -Unexpected behavior: Type conversions can lead to unexpected behavior, such as when converting between signed and unsigned integer types, or when converting between floating-point and integer types.
        -Confusing syntax: Type conversions can have confusing syntax, particularly when using typecast operators or type conversion functions, making the code more difficult to read and understand.
        -Increased complexity: Type conversions can increase the complexity of your code, making it harder to debug and maintain.
        -Slower performance: Type conversions can sometimes result in slower performance, particularly when converting data between complex data types, such as between structures and arrays.

    Also Refer to Type Punning in Classes and Objects

    Source: https://www.geeksforgeeks.org/dynamic-_cast-in-cpp/
            https://www.geeksforgeeks.org/type-conversion-c/
            https://cplusplus.com/doc/oldtutorial/typecasting/
            https://www.programiz.com/cpp-programming/type-conversion
            https://www.youtube.com/watch?v=uI10H1jzw00
            https://www.youtube.com/watch?v=-H8NNi-Kox0&list=PLxCzCOWd7aiGmiGl_DOuRMJYG8tOVuapB&index=4
            https://www.youtube.com/watch?v=ql2F5Am3_9E
            https://www.youtube.com/watch?v=pWZS1MtxI-A
*/
#include<iostream>
using namespace std;

int main(){

    //___________________
    //Implicit & Explicit
    //___________________

    char value1 = 3;                                //Implicit type conversion where its automatically getting rounded to a character according to ascii table here https://upload.wikimedia.org/wikipedia/commons/d/dd/ASCII-Table.svg
    //or
    cout<<endl<<"conversion: "<<(char)100<<endl;    //This is explicit conversion
    double value2 = (int) 3.14;                     //Explicit type conversion were 3.14 got converted to int type and then stored to double but here after conversion to int it is going thorugh another implicit conversion to get converted to double so it can be stored.
    int value3 = (int) 'Hello';                     //Wont work when using "" have to use ''(maybe "" is not defined as in cout and string we can use "" but "" dosent work in char only '' works) in this example more than 1 character is showing a warning "warning: multi-character character constant [-Wmultichar]"
    int value4 = (int) 'V';                         //This is converting text to interger based on ASCII table

    cout<<"Value 1: "<<value1<<endl;
    cout<<"Value 2: "<<value2<<endl;
    cout<<"Value 3: "<<value3<<endl;
    cout<<"Value 4: "<<value4<<endl;

    //Another example
    int answers = 8;
    int questions = 10;
    double percentage = (double)answers/questions *100; //Now precedence of (type) is higher that / so it will convert answers to double and question will also get implicitly converted to double and the answer we get will also be double. Basically either one answer or question or both needs to be explicitly converted and the other one will get implicitly converted based on table of which is the largest varialbe type.
    cout<<percentage<<" %"<<endl;

    //Another example
    int a =10,b=3;
    
    float c = a/b;
    float c2 = (float) a/b;             //here a is being explicitly converted and b is being implicitly converted to float
    float c3 = (float) (a/b);           //here both have equal precedance so here Associativity will take place meaning right to left will takes place so first a/b takes place and then its gets explicitly converted to float
    
    //Another example
    int x = 10 + 'a';                   //Now here if you follow the above table you will see int is larger variable than char so char gets implicit type conversion to int according to ASCII table
    int x2 = 10 + 1.0;                  //Now here as you can see 10 is int and 1.0 is float and according to table we know float is larger variable type so 10 will be implicitly converted to float and will become 10.1

    //___________
    //Static Cast
    //___________
    int x3 = static_cast<int>(10.24)+5.5;   //Now here 10.24 is being converted to int and static cast dose conversions checks to make sure the conversion is possible.

    //
    //ADD CONSTANT DYNAMIC AND OTHER THINGS QUICK
    //
    //
    //
    //
    //

}