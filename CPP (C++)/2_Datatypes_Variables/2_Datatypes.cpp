/*
    *************
    * Datatypes *
    *************

    Padding: Adding the missing binary is called padding. In Binary if there is a number 1 in binary we add the missing digits and complete 
             it as 0001, another example can be 11 and in this case we will pad it to 0011.

    Various ways data can be represented:

        • Binary System:
            Before we jump into Datatypes lets first understand what this data even is in computers?
                -Data inside computer is stored as 0 & 1 nothing else
            Now you might wonder how dose computer makes sense if a set of 0's and 1's mean something?
                -In mathematics this binary data is also called base 2 representation meaning only 2 types of numbers 0 or 1 for eg. 100101 = 1*2^5 + 0*2^4 + 0*2^3 + 1*2^2 + 0*2^1 + 1*2^0
                a base 10 will be represed as such for eg. 2371 = 2*10^3 + 3*10^2 + 7*10^1 + 1*10^0
                you can use a programmer calculator and check what a binary number represents

            Now you can use these bits and group them to represents a number 
                -3 bits: Each group of 3 bits can represent decimal numbers from 0 to 7 eg. 
                    ______________________
                    |__Binary__|__Decimal_|
                    |    000   |     0    |
                    |    001   |     1    |
                    |    010   |     2    |
                    |    011   |     3    |
                    |    100   |     4    |
                    |    101   |     5    |
                    |    110   |     6    |
                    |    111   |     7    |
                    |__________|__________|
                    inside memory:  011 011 100 011 000 011 110 001
                    will represent:  3   3   4   3   0   3   6   1

                -4 bits: Each group of 4 bits can represent decimal numbers from 0 to 15 eg.
                    ______________________
                    |__Binary__|__Decimal_|
                    |   0000   |     0    |
                    |   0001   |     1    |
                    |   0010   |     2    |
                    |   0011   |     3    |
                    |   0100   |     4    |
                    |   0101   |     5    |
                    |   0110   |     6    |
                    |   0111   |     7    |
                    |   1000   |     8    |
                    |   1001   |     9    |
                    |   1010   |    10    |
                    |   1011   |    11    |
                    |   1100   |    12    |
                    |   1101   |    13    |
                    |   1110   |    14    |
                    |   1111   |    15    |
                    |__________|__________|

                    -Same way we can increase the pairing to 64 bits and represent even more things like letters and more.
                    _________________________________
                    |___Digits(Bits)__|__Data Range__|
                    |        1        |    0 ~ 1     |
                    |        2        |    0 ~ 3     |
                    |        3        |    0 ~ 7     |
                    |        4        |    0 ~ 15    |
                    |        5        |    0 ~ 31    |
                    |       ..        |     ...      |
                    |        n        |    0 ~ 2^n-1 |
                    |_________________|______________|
                        
                    _____________________________________________________________
                    |___Digits(Bits)__|__Bytes__|___________Data Range___________|
                    |        8        |    1    |            0 ~ 255             |
                    |        16       |    2    |            0 ~ 65,535          |
                    |        32       |    4    |            0 ~ 34,359,738,367  |
                    |        64       |    8    | 0 ~ 18,446,744,073,709,551,615 |
                    |_________________|_________|________________________________|
                    Formula 2^n where n is bits to find the range
         
        • Hexadecimal System:
            The hexadecimal system is a base-16 number system used in computing and mathematics. It is often used as a convenient way to represent binary numbers in a more compact and human-readable format. 
            In hexadecimal, numbers are represented using sixteen symbols: 0-9 for values 0 to 9, and A-F for values 10 to 15.
                __________________________________________
                |_Binary (4 bits)_|_Decimal_|_Hexadecimal_|
                | 0000            | 0       | 0           |
                | 0001            | 1       | 1           |
                | 0010            | 2       | 2           |
                | 0011            | 3       | 3           |
                | 0100            | 4       | 4           |
                | 0101            | 5       | 5           |
                | 0110            | 6       | 6           |
                | 0111            | 7       | 7           |
                | 1000            | 8       | 8           |
                | 1001            | 9       | 9           |
                | 1010            | 10      | A           |
                | 1011            | 11      | B           |
                | 1100            | 12      | C           |
                | 1101            | 13      | D           |
                | 1110            | 14      | E           |
                | 1111            | 15      | F           |
                |_________________|_________|_____________|
                In this table:
                    -Each row represents a 4-bit binary number.
                    -The "Decimal" column shows the decimal equivalent of each binary number.
                    -The "Hexadecimal" column shows the hexadecimal representation of each binary number.
                Example:-
                Hexadecimal: 0x3A7F

                To understand this number better:

                Each digit in a hexadecimal number represents 4 bits (a nibble) in binary.
                "0x" before a hexadecimal number is a common notation to indicate that the following characters represent a hexadecimal value.
                The first digit '3' represents the binary number 0011.
                The second digit 'A' represents the binary number 1010.
                The third digit '7' represents the binary number 0111.
                The fourth digit 'F' represents the binary number 1111.
                Putting it all together:

                3A7F in hexadecimal is equivalent to 0011 1010 0111 1111 in binary.
                In decimal, 3A7F is equal to 14975.

                __________________________________________
                |_Binary_(8 bits)_|_Decimal_|_Hexadecimal_|
                | 00000000        | 0       | 0           |
                | 00000001        | 1       | 1           |
                | 00000010        | 2       | 2           |
                | 00000011        | 3       | 3           |
                | 00000100        | 4       | 4           |
                | 00000101        | 5       | 5           |
                | 00000110        | 6       | 6           |
                | 00000111        | 7       | 7           |
                | 00001000        | 8       | 8           |
                | 00001001        | 9       | 9           |
                | 00001010        | 10      | A           |
                | 00001011        | 11      | B           |
                | 00001100        | 12      | C           |
                | 00001101        | 13      | D           |
                | 00001110        | 14      | E           |
                | 00001111        | 15      | F           |
                | 00010000        | 16      | 10          |
                |   ...           | ...     | ...         |
                | 11111111        | 255     | FF          |
                |_________________|_________|_____________|

         
        •Octal System:
            The octal system, also known as base-8, is a number system that uses eight digits: 0, 1, 2, 3, 4, 5, 6, and 7. Each position in an octal number represents 
            a power of 8, just as each position in a decimal number represents a power of 10.

            1. Digits:
                - Octal numbers use digits 0-7. Once you reach 7, the next number is represented as 10 in octal (which is equivalent to 8 in decimal), similar to how in decimal, after 9 comes 10.
                - The digits in octal are 0, 1, 2, 3, 4, 5, 6, 7.

            2. Conversion:
                - To convert an octal number to decimal, you multiply each digit by the corresponding power of 8 based on its position, starting from the rightmost digit.
                - For example, the octal number 247 can be converted to decimal as \( 2 \times 8^2 + 4 \times 8^1 + 7 \times 8^0 = 2 \times 64 + 4 \times 8 + 7 \times 1 = 128 + 32 + 7 = 167 \).

            3. Representation:
                - In programming languages, octal numbers are often represented with a leading zero, like 0247, to differentiate them from decimal numbers.
                - For example, in Python or C programming languages, numbers prefixed with a '0' are considered octal.

            4. Usage:
                - Octal numbers were more commonly used in older computing systems because of their direct relationship with binary numbers (3 octal digits correspond to exactly 3 binary digits, or bits).
                - Nowadays, octal is less frequently used in general computing and programming, with hexadecimal being more common for representing binary values compactly.

            Overall, the octal system is a base-8 number system that represents numbers using digits 0-7 and is based on powers of 8. It has been largely replaced by hexadecimal in modern computing due to 
            its more compact representation of binary values.

     ________________________
    |   Types of Datatypes  |
    |_______________________|
    C++ provides a wide range of data types to represent different kinds of values, from integers and floating-point numbers to characters and custom-defined types. 
    Here are some of the common data types in C++:

        1. Fundamental Data Types:
            - `int`: Represents integers.
            - `char`: Represents a single character.  Size: 8 bits or 1 bytes. All characters are represed using ASCII Read more at https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html
            - `float`: Represents single-precision floating-point numbers. Size: 4bytes Precision: 7. No long for float coz we have a double for that
            - `double`: Represents double-precision floating-point numbers.Size: 8bytes Precision: 15. For Long double Size: 12 Precision: 15+. Also every floating point number is considered as a double by default by the compiler.
            - `bool`: Represents Boolean values (`true` or `false`). Size: 8 bits or 1 bytes. In binary true is represented as 00000001 or 0x01 in hexadecimal.
            - `void`: Represents typeless meaning there is no type its just void.
            - `auto`: Represents auto detection what is the type of data and assign it accordingly.

        2. Modifiers: Just using modifiers and not mentioning variable type (int,double) compiler will consider it as int by default so mention whats the data type for better safety.
            - `short`: Modifies `int` to represent short integers.
            - `long`: Modifies `int` to represent long integers.
            - `signed` and `unsigned`: Modifies integer types to represent signed or unsigned values.

        3. Derived Data Types:
            - `array`: Represents a fixed-size collection of elements of the same data type.
            - `pointer`: Represents a memory address.
            - `reference`: Represents an alias to an existing variable.
            - `function`: Represents a function.
            - `enum`: Represents an enumerated type with named constants.

        4. User-Defined Data Types:
            - `struct`: Defines a composite data type that groups variables of different data types.
            - `class`: Defines a composite data type with member variables and functions (used in object-oriented programming).
            - `union`: Defines a data type that can store different types of data in the same memory location.
            - `typedef`: Defines an alias for an existing data type.
            - `enum class` (C++11 onwards): Similar to `enum` but with more controlled scoping.

        5. Custom Types:
            - C++ allows you to define your own custom data types using `struct`, `class`, and `enum` to suit your specific needs.

        6. Standard Library Types:
            - C++ Standard Library provides additional data types like `string`, `vector`, `map`, `set`, and more, which are implemented as template classes.

        7. User-Defined Literals (C++11 onwards):
            - Allows you to create custom literals for specific data types, improving readability and expressiveness in code.

        8. Other Data Types:
            - Depending on the C++ standard and compiler, there may be additional data types and features introduced in newer standards, such as C++11, C++14, C++17, and C++20.

        Here's a simple example of using some of these data types:

        ```cpp
        #include <iostream>
        using namespace std;

        int main() {
            int integerNumber = 42;
            char character = 'A';
            float floatValue = 3.14159;
            double doubleValue = 2.71828;
            bool isTrue = true;

            cout << "Integer: " << integerNumber << endl;
            cout << "Character: " << character << endl;
            cout << "Float: " << floatValue << endl;
            cout << "Double: " << doubleValue << endl;
            cout << "Boolean: " << isTrue << endl;

            return 0;
        }
        ```
        In this example, we use several fundamental data types to store and display different kinds of values.

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
#include<iomanip>   // used for precision
#include<cstdint> // i didnt seem to need it for declaring a different bit size integer but it was used in a https://www.quora.com/How-do-you-declare-a-64-bit-integer-in-C-1 we dont need to use this as this is a part of namespace std liberary https://en.cppreference.com/w/cpp/header/cstdint
                // also read https://stackoverflow.com/questions/50505212/how-am-i-able-to-use-int32-t-without-without-using-std where you will see why we to add this coz it might not working with other compilers

using namespace std;

int main() {

    //________________________________________________
    //  Representing Decimal,Octal,Hex,Binary in C++
    //________________________________________________

    int number_decimal = 15;    //Decimal
    int number_octal = 017;     //Octal where 0 represents that its a octal representation
    int number_hexadecimal = 0x0f;  //Hexadecimal where 0x represents that its a hex representation
    int number_binary = 0b00001111; //Binary - C++14 where 0b represents that its a binary representation
    bool bool_true_hex = 0x01;  //Representing True in Hex
    bool bool_false_hex = 0x00; //Representing False in Hex

    cout << "Decimal: " << number_decimal << endl;
    cout << "Octal: " << number_octal << endl;
    cout << "Hexadecimal: " << number_hexadecimal << endl;
    cout << "Binary: " << number_binary << endl;
    cout << "Boolean true in hex: " << bool_true_hex << endl;
    cout << "Boolean false in hex: " << bool_false_hex << endl<<endl;

    //representing different values
    int integerNumber = 42;
    char character = 'A';
    float floatValue = 3.14159;
    long double doubleValue = 2.71828;
    bool isTrue = true;

    cout << "Integer: " << integerNumber << endl;
    cout << "Character: " << character << endl;
    cout << "Float: " << floatValue << endl;
    cout << "Double: " << doubleValue << endl;
    cout << "Boolean: " << isTrue << endl;

    //__________________________________________
    //            Auto Types
    //__________________________________________
        
    //This auto determines the type of value which is being entered the compiler auto determines it.
    auto value1 {1};
    auto value2 {3.14};
    auto value3 {"Hello"};
    auto value4 {"how are you doing"};

    //If you deduce a type of data of one type lets say unsigned integer and then later try to add -ve value to that variable compiler will add garbage data to the variable as unsigned can only have +ve values
    auto var3{333u}; //Declaring and initializing with type deduction
    var3 = -22; //Assign negative number. Danger! compiler will not pick this up as a warning.
    std::cout<<"var3:" << var3 << std::endl;

    //__________________________________________
    //            Integer Types
    //__________________________________________

    //INT
    std::cout<<"Enter Room Length: ";
    int room_lenght{0};     
    std::cin>>room_lenght;
    std::cout<<"Enter Room Breadth: ";
    int room_breadth{0};
    std::cin>>room_breadth;
    std::cout<<"Area of the room is: "<< room_lenght*room_breadth << std::endl;
        
    //signed 
    signed int value0{-20000000};   //signed can store a range from negative to positive numbers.

    //unsigned
    unsigned int value{123456789123456789123456789};    //unsigned can only story +ve values for unsigned as you dont have to store negative values you can now store double the positive values compared to signed values
    unsigned short int exam_score{55};
        
    //Short int (only applies to integers dont work for other data types)
    short int smallint = 1; // 2 bytes in size
        
    //long (only applies to integers dont work for other data types)
    long people_in_florida{20610000};       //also not mentoning variable type(int,double) compiler will consider it as int so compiler will look at it as long int people_in_florida{20610000};
    long people_on_earth{7'600'000'000};    //using ' only helps to read compiler just ignores these and not effect takes place on value when using these you just also type it as long e = 1'2'3'4'5'6'7'8'9'1'2'3'4'5'6'7'8'9'1; and this will also work fine but is useless to do so.
    long people_on_earth_C_Style = 7'600'000'000; // this is old C style and will give buffer overflow when you run it so ditch this and use new C++ style where we use {}

    //long long (only applies to integers dont work for other data types)
    long long distance_to_alpha_centuari{9'461'000'000'000};

    //   Different bit size variable 8,16,32,64 bits
    std::int64_t my_64_bit_int = 0x1122334455667788; 
    std::uint64_t my_other_64_bit_int = 0x2233445566778899; //this is often same as unsigned long long but give 64bit size guarante and is more portable.

    std::int8_t my_32_bit_int {32}; 
    std::uint32_t my_other_32_bit_int ; 
    // and so and so forth for 16 and 8 bit and 4 bit


    //Floating Point Types (Floating Point number Memory Representation IEEE_754 https://en.wikipedia.org/wiki/IEEE_754 )
    float car_payment{401.23};      //by defaunt floating point values are treated as double by default by the compiler so use Literal Suffix scroll below for better understanding.
    double pi{3.14159};
    long double large_amount{2.7e120};
    long double small_amount{2.7e-120};

    //__________________________________________
    //              Boolean Type
    //__________________________________________

    bool game_over{false};  //basically 0 = false, 1 = true at binary level for whole number range anything that is non 0 = true including -ve numbers.

    //__________________________________________
    //          Overflow Example
    //__________________________________________
    short value_no_1{30000};
    short value_no_2{1000};
    //short product{value_no_1*value_no_2}; //Overflow as the short cannot store the value and will throw -Wnarrowing error when compiling

    //__________________________________________
    //         LITERAL SUFFIX & PREFIX
    //__________________________________________
        
    /*In C++, a "literal suffix/prefix" is a sequence of characters that you can append before/after to a string/number literal to indicate its type or make it explicit. 
      Literal suffixes are used to specify the data type of the literal, and they are often helpful to avoid type ambiguity or to explicitly specify the intended data type.

      Here are some common literal suffixes in C++:

    1. Integer Literal Suffixes:
        - `u` or `U`: Unsigned integer.
        - `l` or `L`: Long integer.
        - `ul` or `UL`: unsigned long
        - `ll` or `LL`: Long long integer.
        - `ull` or `ULL`: unsigned long long

        For example: */
    int x = 42;
    unsigned int y = 42u;
    long int z = 42l;
    unsigned long int p = 12345678923456789ul;
    long long int w = 42ll;
    unsigned long int q = 12345678923456789ull;


    /*
    2. Floating-Point Literal Suffixes:
        - `f` or `F`: Float.
        - `l` or `L`: Long double.

    For example: */

    float a = 3.123456789123456789f;    //the reason why we use f here even tho the variable is defined as float coz the compiler will consider the floating point number as a double by default so we use the suffix to tell compiler to treat it as a float this will make us loose some precision but the value will be treated as you want it to be treated by compiler.
    double b = 3.1234567891234567789;   //dont have a literal for double as all floating point numbers are treated as a double by default unless some literal suffix is used.
    long double c = 3.1234567891234567789L;

    //Useless example but good for understanding whats happening
    float a = (double)3.123456789123456789f;
    std::cout<< std::setprecision(20);      // we used #include<iomanip> for this function
    std::cout <<a<<std::endl;
    /*
        Let's break down the statement `float a = (double)3.123456789123456789f;` and explain each part step by step.

        1. **`3.123456789123456789f` (Float Literal):**
            - The literal `3.123456789123456789f` has an `f` suffix, indicating that it is a `float` type.
            - A `float` typically has a precision of about 7 decimal digits. Therefore, the literal `3.123456789123456789f` will be rounded to fit within the precision of a `float`.

        2. **`(double)` (Casting to Double):**
            - The `(double)` cast converts the `float` literal to a `double`.
            - A `double` has a higher precision (typically about 15-17 decimal digits) and a larger range than a `float`. However, since the initial value was a `float`, it already lost some precision.
            - The cast from `float` to `double` doesn't increase the precision of the already rounded number but represents the `float` value as a `double`.

        3. **Assignment to `float a`:**
            - After converting the `float` literal to a `double`, we assign this `double` value to the `float` variable `a`.
            - This assignment involves converting the `double` back to a `float`. Since the precision of `float` is lower than `double`, this might result in further rounding, although in this case, the value remains the same as the initial `float` precision was already limited.

        ### Step-by-Step Example

            To see the exact process:

            1. **Initial float literal:**
                - `3.123456789123456789f` becomes `3.1234567f` due to `float` precision (approximation).

            2. **Casting to double:**
                - `(double)3.1234567f` produces a `double` value representing `3.1234567` precisely but as a `double`.

            3. **Assigning to float:**
                - `float a = 3.1234567` converts the `double` back to `float`, retaining the same `3.1234567`.

            The key points are:
                - The initial literal is interpreted as a `float` with limited precision.
                - Casting to `double` doesn't improve precision but holds the `float` value in a `double` type.
                - Assigning the `double` back to `float` keeps the precision at the `float` level.

            Here's the final understanding of `float a = (double)3.123456789123456789f;`:
                - The literal `3.123456789123456789f` is approximated to `3.1234567f`.
                - This `float` value is cast to a `double`, which still represents `3.1234567`.
                - The `double` is then assigned to a `float`, maintaining the value `3.1234567f`.

            So, `a` will have the value `3.1234567f` after this operation.
    */

    /*
    3. Character and String Literal Suffixes (for characters we use prefix):
        - `u8`: UTF-8 encoded character or string literal.
        - `u`: UTF-16 encoded character or string literal.
        - `U`: UTF-32 encoded character or string literal.
        - `L`: Wide/Long character or string literal.

    For example: */

    //std::char8_t ch8 = u8'A'; //implemented in C++20 maybe not ready yet with compiler.
    char16_t ch16 = u'B';
    char32_t ch32 = U'C';   //is guaranteed to be exactly 32 bits in size, regardless of the platform or compiler.
    wchar_t wideCh = L'D';  //16 bits (on Windows) or 32 bits (on Unix-like systems).

    const char* utf8Str = u8"This is a UTF-8 string.";
    const char16_t* utf16Str = u"This is a UTF-16 string.";
    const char32_t* utf32Str = U"This is a UTF-32 string.";
    const wchar_t* wideStr = L"This is a wide string.";


    /*These literal suffixes help the compiler determine the correct data type for the literal and can prevent unintended type conversions or errors. 
      Using them is a good practice for writing clear and maintainable C++ code. */

    // More Explanation for Litral Suffix and how Compiler stores data in variables.
    auto num1 = 1;                      // will be deduced as int
    auto num2 = 12345678923456789ll;   // will be deduced as long long int
    auto num3 = 12345678923456789ul;   // will be deduced as unsigned long long int
    auto num4 = 1.1;                    // will be deduced as double
    auto num5 = 1.123456789f;           // will be deduced as float
    auto num6 = 1.12345678923456789l;   // will be deduced as long double
    auto num7 = 1.12345678923456789l;   // will be deduced as long long double
    auto num8 = u'hello how are you doing all well ?';

    /*  
        The Compiler checks the values and sees if its a int, double etc and based on that auto will be deduced as int, double etc.
            
        •Now whats the diff between auto num = 1.1f; vs auto num = (float)1.1; 
         well in the second case (float)1.1 is being cosidered as double by compiler and then its getting type converted to float where as in the 
         first case 1.1f is being considered as a float by compiler as we have a LITERAL SUFFIX f at the end of the value without the f, the 
         number would be interpreted as a double by default by compiler like in the case of num2 or second case (float)1.1.

        If you want to explicitly specify 1 as a double, you should use a suffix 1.0 or 1.0f to indicate a floating-point literal
    */

    std::cout<<"num1 is: "<<num1<<" and size of number 1 is: "<<sizeof(num1)<<std::endl;
    std::cout<<"num2 is: "<<num2<<" and size of number 2 is: "<<sizeof(num2)<<std::endl;
    std::cout<<"num3 is: "<<num3<<" and size of number 3 is: "<<sizeof(num3)<<std::endl;
    std::cout<<"num4 is: "<<num4<<" and size of number 4 is: "<<sizeof(num4)<<std::endl;
    std::cout<<"num5 is: "<<num5<<" and size of number 5 is: "<<sizeof(num5)<<std::endl;
    std::cout<<"num6 is: "<<num6<<" and size of number 6 is: "<<sizeof(num6)<<std::endl;
    std::cout<<"num7 is: "<<num7<<" and size of number 7 is: "<<sizeof(num7)<<std::endl;
    std::cout<<"num8 is: "<<num8<<" and size of number 8 is: "<<sizeof(num8)<<std::endl;

    //! Why were Literal Suffix needed and can we have our own literal suffix ?
    /*
        Literal suffixes in C++ were introduced to allow developers to create user-defined literals, which enable the creation of custom types that can be used in 
        a natural and expressive way, similar to built-in literals like integers, floats, and strings. Custom literal suffixes, also known as user-defined literal 
        operators, were introduced in C++11 as a way to enhance the expressiveness and flexibility of the language. Tho the original literal suffix like integers, 
        floats were introduced from the start where as Character and string literal suffixes and Custom Literal Suffixes were introduced in C++11.

        Here are some reasons why literal suffixes were introduced and why they are useful:

        1. **Custom Types**: Literal suffixes allow you to define your own types that can be used in a manner similar to built-in types. For example, you can 
                             define a custom type for representing physical units (e.g., meters, seconds) and use literal suffixes to create instances of these 
                             units in a more readable and intuitive way.

        2. **Improved Readability**: Literal suffixes can improve the readability of code by making it more self-explanatory. 
                                     For example, instead of writing a function or constructor to create instances of a custom 
                                     type, you can use a literal suffix that clearly indicates the intended purpose of the value.

        3. **Type Safety**: By defining literal suffixes for custom types, you can ensure that the compiler enforces type safety. This helps prevent unintended 
                            conversions or mixing of values with different units or semantics.

        4. **Consistency**: Literal suffixes provide a consistent way to work with custom types, making the codebase more uniform and easier to understand for developers.

        5. **Domain-Specific Languages (DSLs)**: Literal suffixes are particularly useful when creating domain-specific languages within C++. They allow you to define 
                                                 a syntax that is more natural for a specific problem domain, making the code in that domain easier to write and understand.

        6. **Expressiveness**: Literal suffixes make C++ code more expressive, allowing developers to convey the intent of the code more clearly. This can lead to more 
                               self-documenting code.
            
        Also as you already know every floating point number is as a double so using prefix for better accuracy is important for eg.:
            ```
            #include<iostream>
            #include<iomanip>
            int main(){
                    
                    long double d = 3.123456789123456789L;
                    long double e = 3.123456789123456789;
                    
                    std::cout<< std::setprecision(20);
                    std::cout <<d<<std::endl;
                    std::cout <<e<<std::endl;
                    return 0;
            }
            ```
        In the above example the output of d and e will be 3.123456789123456789, 
                                                           3.1234567891234568116 and you can see where we use L suffix the precision is not lost like in the case of variable e because in that
        case the value was considered as double by default as no suffix was provided so that will get rounded down to double and when its stored in long double it will have garbage value due to loss
        of precision.

        However, if you were using the literal without assigning it directly to a variable, like in an expression or function argument, you would need the `L` suffix to specify its type explicitly:
            ```
            long double result = someFunction(1.1234567891234567L);  // Explicitly specify long double type
            ```

        Here's a simple example to illustrate the use of defining literal suffixes:
            ```
            #include<iostream>
            //Example1
            // Define a custom type for representing distances in meters
            class Meter {
            public:
                explicit Meter(double value) : value_(value) {}
                double getValue() const { return value_; }

            private:
                double value_;
            };

            // Define a literal suffix for meters
            Meter operator "" _m(long double value) {
                return Meter(static_cast<double>(value));
            }

            //Example2
            // Define a user-defined literal for converting a string to uppercase
             std::string operator "" _uppercase(const char* str, size_t size) {
                std::string result(str, size);
                for (char& c : result) {
                    c = std::toupper(c);
                }
                return result;
            }

            int main() {
                //Example1
                // Use the custom literal suffix to create a Meter object
                Meter distance = 10.5_m;

                // Use the Meter object
                double value = distance.getValue(); // 10.5


                //Example2
                // Use the custom literal suffix
                std::string message = "hello"_uppercase;
                std::cout << message << std::endl;  // Output: "HELLO"
                return 0;
            }
            ```
            In this example, the `10.5_m` literal is used to create a `Meter` object, providing a clear and intuitive way to represent distances in meters.

            Overall, literal suffixes in C++ provide a way to extend the language's expressiveness and make it more suitable for a wider range of 
            programming tasks, especially those involving custom types and domain-specific requirements.
        */
       
    //__________________________________________
    //               Char Types
    //__________________________________________

    //signed 
    signed char char0 = 5;

    //unsigned 
    unsigned char char1 = 10;

    char charater0 {65};        //will represent A according to ASCII table read here https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html
    char character[]{"hi"};     // you can put [] = {} but putting = is not required anymore, the [] hold the size of char, " " puts a null character at the end of it if we write it this way
    char character2[]{'a','b','c'};
    char character3{'j'};
    char a[100]{'a','b','\0'};   //there should be a null character(\0) at the end to avoid garbage value to be printed, it also determines string end.
    std::cout<<"Character: "<<character<<" & "<<character2<<" & "<<character3<<std::endl;

    return 0;
}