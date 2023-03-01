/*
    ********************************
    * Using or Old typedef Keyword *
    ********************************
    we can get a new identifier to an existing datatype like int char vector etc.
    It us used to form an alias of a specific data type, Also its a good practice to use _t after alias to help understand its one
    Now typedef has be replaced with using keyword as it works better with templates
    
*/
#include<iostream>

//using print = std::cout;    //as this wont work coz variable "std::cout" is not a type name
using number_t = int;
typedef int integer_t;

number_t value = 27;
