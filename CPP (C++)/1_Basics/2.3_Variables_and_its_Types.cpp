/*
    *********************
    * Types of variable *
    *********************
    - 1st Local 
      2nd Global 
      3rd Constant 
      4th Undefined by not using {} and value inside it

    Also all different types of variables types such as INT,Float,Boolean,CHAR,double,etc

    *****************************
    * Declaration of a Variable *
    *****************************
    - Variables is the name given to a location in the memory location to the variable that is 
      in programming
    
    **************************
    * Variables names in C++ *
    **************************

    - Variables names can contain $, letters, digits, _(underscore)
    - Names are case sensitive (myVar and myvar are different variables)
    - Names cannot contain whitespaces or special characters like !, #, %.
    - Reserved words (like C++ keywords, such as int) cannot be used as names

    acceptable variable names:
        Grade or grade  //both of these are going to 2 different variables coz one has G and another has g so even tho they are the same word for C++ they are 2 different variable coz of this change
        GradeOnTest
        Grade_On_Test
        _my_var
        myvar2
        my2var
        myVar
        $
        $myvar
        $xxx$

    unacceptable variable names:
        Grade(Test)
        GradeTest#1
        3rd_Test_Grade
        2myvar
        my-var
        my+var
        my var
        ,myvar
        !myvar
        my*var
        my,var
        and all the reserved c++ names

    References: https://www.geeksforgeeks.org/naming-convention-in-c/
*/


#include<iostream>
#include<cstdint> // i didnt seem to need it for declaring a different bit size integer but it was used in a https://www.quora.com/How-do-you-declare-a-64-bit-integer-in-C-1 we dont need to use this as this is a part of namespace std liberary https://en.cppreference.com/w/cpp/header/cstdint
                 // also read https://stackoverflow.com/questions/50505212/how-am-i-able-to-use-int32-t-without-without-using-std where you will see why we to add this coz it might not working with other compilers

int const my_room_area{200}; // Global Variable which is also constant, these constant values cannot be changed by the user

int main()
    {   //__________________________________________
        //            Integer Types
        //__________________________________________

        //INT
        std::cout<<"Enter Room Length: ";
        int room_lenght{0};     //Local Variable
        std::cin>>room_lenght;

        std::cout<<"Enter Room Breadth: ";
        int room_breadth{0};    //Local Variable
        std::cin>>room_breadth;


        std::cout<<"Area of the room is: "<< room_lenght*room_breadth << std::endl;

        int my_room_area{6969};     // Overshadows the Global Variable if written locally
        std::cout<<"But my Room Area is :"<<my_room_area<<std::endl;
        
        //signed (only applies to integers dont work for other data types)
        signed int value0{-20000000};   //this can store a range from negative to positive numbers.

        //unsigned (only applies to integers dont work for other data types)
        unsigned int value{123456789123456789123456789};    //unsigned can only story +ve values and signed can store a range of negative and positive value for unsigned as you dont have to store negative values you can now store double the positive values compared to signed values
        unsigned short int exam_score{55};
        
        //long (only applies to integers dont work for other data types)
        long people_in_florida{20610000};
        long people_on_earth{7'600'000'000};
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
        float car_payment{401.23};
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
        - `ll` or `LL`: Long long integer.

        For example: */
        int x = 42;
        unsigned int y = 42u;
        long int z = 42l;
        long long int w = 42ll;


        /*
        2. Floating-Point Literal Suffixes:
        - `f` or `F`: Float.
        - `l` or `L`: Long double.

        For example: */

        float a = 3.123456789123456789f;    //the reason why we use f here even tho the variable is a float coz the compiler will consider it as a double by default so we use the suffix to tell compiler to treat it as a float
        double b = 3.14;
        long double c = 3.14L;

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
        auto num1 = 1;
        auto num2 = 1.1;
        auto num3 = 1.1f;   // you can either use f or F
        auto num4 = 1.1l;   // you can either use l or L
        auto num5 = 'e';

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
            
            Also In C and C++, when you explicitly declare a variable with the `long double` type, like `long double ld = 1.1234567891234567;`, you don't necessarily need 
            to include the `L` suffix after the literal. The `L` suffix is optional in this context because the compiler can infer that you intend for the literal to be 
            of type `long double` based on the type of the variable it's assigned to (`ld` in this case).

            So, the statement `long double ld = 1.1234567891234567;` is perfectly valid and will be interpreted by the compiler as initializing `ld` with a `long double` value. The `L` suffix 
            is more necessary when you're using literals directly without explicit type declarations, especially when you want to ensure that a literal is treated as a specific type (like `long double`).

            Here's an example to illustrate:

            ```cpp
            long double ld = 1.1234567891234567;  // Compiler infers long double type
            ```

            In this example, the compiler knows that `ld` is a `long double`, so it interprets the literal `1.1234567891234567` as a `long double` without needing an explicit `L` suffix.

            However, if you were using the literal without assigning it directly to a variable, like in an expression or function argument, you would need the `L` suffix to specify its type explicitly:

            ```cpp
            long double result = someFunction(1.1234567891234567L);  // Explicitly specify long double type
            ```

            In summary, the `L` suffix is often optional when assigning literals directly to variables of specific types because the compiler can infer the type 
            from the context. However, it becomes necessary when you want to explicitly specify the type of a literal, especially when it's not directly assigned to a variable.


            Here's a simple example to illustrate the use of literal suffixes:

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

            In this example, the `10.5_m` literal is used to create a `Meter` object, providing a clear and intuitive way to represent distances in meters.

            Overall, literal suffixes in C++ provide a way to extend the language's expressiveness and make it more suitable for a wider range of 
            programming tasks, especially those involving custom types and domain-specific requirements.
        */
       
        //__________________________________________
        //               Char Types
        //__________________________________________


        char character[]{"hi"};     // you can put [] = {} but putting = is not required anymore, the [] hold the size of char, " " puts a null character at the end of it if we write it this way
        char character2[]{'a','b','c'};
        char character3{'j'};
        char a[100]{'a','b','\0'};   //there should be a null character at the end to avoid garbage value to be printed
        std::cout<<"Character: "<<character<<" & "<<character2<<" & "<<character3<<std::endl;

        return 0;

    }