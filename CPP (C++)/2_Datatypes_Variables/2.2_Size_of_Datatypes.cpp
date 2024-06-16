/*
    *********************
    * Size of Datatypes *
    *********************
    Here we will see the size of the datatypes tho do remember based on system architecture 
    and compiler the size of these datatypes can vary.

    The size of data types in programming languages can vary based on the compiler and CPU 
    architecture being used. The size of data types is not always standardized and can be 
    influenced by several factors:

    1. Compiler: Different compilers may have different rules for data type sizes. 
    For example, the size of an `int` in C or C++ can be 2 bytes on some compilers and 
    4 bytes on others. The compiler may also offer options to control data type sizes, 
    such as using compiler flags to specify the size of integers.

    2. CPU Architecture: The underlying hardware and CPU architecture can also affect 
    data type sizes. For example, on a 32-bit CPU architecture, an `int` may be 
    4 bytes, while on a 64-bit architecture, it might be 8 bytes. This is because the 
    CPU's word size and memory addressing capabilities can influence the size of data types.

    3. Operating System: The choice of the operating system can also impact data type 
    sizes. Operating systems may have conventions or standards for data type sizes that 
    compilers on that platform adhere to.

    4. Language Standards: Some programming languages have standards that define the 
    size of data types, but even within these standards, there can be some flexibility 
    or variations allowed, especially for integer types like `int`, `long`, or `short`.

    To ensure portability and consistent behavior across different platforms, it's a 
    good practice to use data types with known sizes, especially when working with 
    low-level programming or when you need to interact with hardware or other software 
    components. For example, C and C++ provide fixed-size data types like 
    `int32_t` or `uint64_t` from the `<stdint.h>` or `<cstdint>` headers, which 
    ensure a specific size regardless of the platform.

    In summary, the size of data types can vary based on the compiler, CPU architecture, and 
    other factors, so it's important to be aware of these variations when writing code 
    that needs to work across different systems.

*/

#include <iostream>
#include <string>
#include <climits> // make sure to include climit for integer types similar information for floating point numbers is contained in <cfloat>

int main()
    {
        std::cout<<"sizeof information"<<std::endl;
        std::cout<<"==============================="<<std::endl;

        
        std::cout<<"int: "<< sizeof(int) << "bytes"<<std::endl;
        std::cout<<"unsigned int: "<< sizeof(unsigned int) << "bytes"<<std::endl;
        std::cout<<"short: "<< sizeof(short) << "bytes"<<std::endl;
        std::cout<<"long: "<< sizeof(long) << "bytes"<<std::endl;
        std::cout<<"long long: "<< sizeof(long long) << "bytes"<<std::endl;
        std::cout<<"bool: "<< sizeof(bool) << "bytes"<<std::endl;

        std::cout<<"================================"<<std::endl;

        std::cout<<"float: "<<sizeof(float)<<"bytes"<<std::endl;
        std::cout<<"double: "<<sizeof(double)<<"bytes"<<std::endl;
        std::cout<<"long double: "<<sizeof(long double)<<"bytes"<<std::endl;

        std::cout<<"================================"<<std::endl;

        std::cout<<"char: "<< sizeof(char) << "bytes"<<std::endl;
        std::cout<<"signed char: "<< sizeof(signed char) << "bytes"<<std::endl;
        std::cout<<"unsigned char: "<< sizeof(unsigned char) << "bytes"<<std::endl;

        // use value defined in <climit>
        std::cout<<"================================"<<std::endl;

        std::cout<<"Minimum Values:"<<std::endl;
        std::cout<<"char: "<<CHAR_MIN<<std::endl;
        std::cout<<"int: "<<INT_MIN<<std::endl;
        std::cout<<"short: "<<SHRT_MIN<<std::endl;
        std::cout<<"long: "<<LONG_MIN<<std::endl;
        std::cout<<"long long: "<<LLONG_MIN<<std::endl;

        std::cout<<"================================"<<std::endl;

        std::cout<<"Maximum Values:"<<std::endl;
        std::cout<<"char: "<<CHAR_MAX<<std::endl;
        std::cout<<"int: "<<INT_MAX<<std::endl;
        std::cout<<"short: "<<SHRT_MAX<<std::endl;
        std::cout<<"long: "<<LONG_MAX<<std::endl;
        std::cout<<"long long: "<<LLONG_MAX<<std::endl;
        // A C++ string can have up to 4294967295 characters (this was on a site which is less than what is actuall true) https://en.cppreference.com/w/cpp/string/basic_string/max_size https://stackoverflow.com/questions/3649639/limit-on-string-size-in-c
        std::string s;
        std::cout<< "Maximum size of a string is " << s.max_size() << " ("<< std::hex << std::showbase << s.max_size()<< "), pointer size: " << std::dec<< CHAR_BIT*sizeof(void*) << " bits\n";


        return 0;
    }