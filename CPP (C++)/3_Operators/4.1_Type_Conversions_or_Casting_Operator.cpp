/*
    ********************
    * Type Conversions *
    ********************
    Converting a value of one data type to another data type. Do note when a larger size type is type converted to a smaller type value precision loss takes place
    for eg.
            int x = 3.55;   // this will be implicitly converted to 3 and as you can see it will loose precision.
            int y = 123456789123456789; //as this number can only be stored in long int or long long int this will also loost precision and be something like 12345678.   
            int z = (int)12.6789    //being explicitly converted to int with value being 12 and it also lost its precision.

    Variables data size Conversion Guidline: (bool is the smallest and long double is the largest data variable)
        bool -> char -> short int -> int -> unsigned int -> long int -> unsigned int -> long long int -> float -> double -> long double

    There are of 2 types of Conversions:
     ___________________________
    |   Implicit Conversion    | 
    |__________________________|
    Automaticly done by the compiler on its own, without any external trigger from the user. All the data types of the variables are upgraded to the data type of the variable which is the largest data type.
        For example1.
            ```
            double price {45.6};
            int units {10};

            double total_price = price * units;

            std::cout<<"Total price: "<< total_price << std::endl;
            std::cout<<"size of Total price: "<< sizeof(total_price) << std::endl;
            ```
            in the above example price is double and units is in int so when they are multiplied compiler will see that when int and double will be multiplied the answer will be double
            so what it dose is it sees which is the smallest of the bunch in this case its int and will convert it to the largest of the bunch which is double in this case. So "units" is converted
            to double and then both are multiplied and result is stored as double.

        For example2.
            ```
            int x;
            double y {45.44};
            x = y;
            std::cout << "The value of x is : " << x << std::endl;
            ```
            now in the above example narrowing is taking place as we have x as int and y as double but later in the program we are putting the value of double y in int x so 
            here another implicit conversion is going to happen where y will be converted to int and then stored in variable x which is of type int. 
     _________________________
    |   Explicit Conversion  |
    |________________________|
    These conversions are done by the programmer intentionally using the operators below.
    
    There are two ways you can do type conversions in C++:
        1. C Style where we precede value with new data type for eg. int a = (int)3.22;. Its is not safe as C++ ones as it dosent do checks.
        2. C++ Style: C++ supports 4 types of casting: (these dont really do anythying different what the C style implicit/explicit type casting dose but it dose provide extra checks by compiler)
                      1. Static Cast - its is same as explicit type casting where we write it as static_cast<int>(10.56), but if it cant be converted compiler will throw an error.
                      2. Dynamic Cast - can be used only with pointers and references to objects. Its purpose is to ensure that the result of the type conversion is a valid complete object of the requested class.
                      3. Const Cast - it is used to add of remove const, you can add const anyway but its mostly for removing const
                      4. Reinterpret Cast -
    
    Advantages of Type Conversion
        -Type safety: Type conversions can be used to ensure that data is being stored and processed in the correct data type, avoiding potential type mismatches and type errors.
        -Improved code readability: By explicitly converting data between different types, you can make the intent of your code clearer and easier to understand.
        -Improved performance: In some cases, type conversions can be used to optimize the performance of your code by converting data to a more efficient data type for processing.
        -Improved compatibility: Type conversions can be used to convert data between different types that are not compatible, allowing you to write code that is compatible with a wider range of APIs and libraries.
        -Improved data manipulation: Type conversions can be used to manipulate data in various ways, such as converting an integer to a string, converting a string to an integer, or converting a floating-point number to an integer.
        -Improved data storage: Type conversions can be used to store data in a more compact form, such as converting a large integer value to a smaller integer type, or converting a large floating-point value to a smaller floating-point type.
    Disadvantages of type conversions in C++ programming:
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
    cout<<endl<<"conversion: "<<(char)100<<endl;    //This is C style explicit conversion
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


    //________________________________________
    // User Defined Type Conversion Operator
    //________________________________________

    /*
    In C++, a type conversion operator allows you to define a conversion from an object of one class to an object of another class or a built-in data type. 
    This feature is particularly useful in user-defined classes when you want to provide a way to convert objects of your class to other types.

    The type conversion operator is defined using the operator keyword, followed by the target data type. It's a member function of the class you are 
    defining it in. Here's the general syntax for a type conversion operator:
    
    #include <iostream>

    class MyInt {
    private:
        int value;

    public:
        MyInt(int val) : value(val) {}

        !// Type conversion operator to convert MyInt to int
        operator int() {
            return value;
        }
    };

    int main() {
        MyInt myInt(42);
        int num = myInt; // Implicit conversion using the type conversion operator
        std::cout << "Converted integer: " << num << std::endl;

        return 0;
    }

    In this example, the MyInt class defines a type conversion operator that converts an object of MyInt into an int. 
    When you assign a MyInt object to an int, the type conversion operator is called automatically.

    Keep in mind that type conversion operators should be used carefully, as they can lead to unexpected behavior. 
    Make sure the conversion is meaningful and follows good programming practices.

    */
}