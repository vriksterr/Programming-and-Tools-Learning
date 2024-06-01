#include <iostream>
using namespace std;

#pragma region functions
const char  *dynamic_init(){
    return "Hello";
}

consteval const char *static_init(){
    return "hello";
}
#pragma endregion
#pragma region variables

//! value not known at compile time
constinit auto dynamic_var = dynamic_init();

//*OK
constinit auto static_var = static_init();