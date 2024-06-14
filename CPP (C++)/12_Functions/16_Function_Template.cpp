/*
    *********************
    * Function Template *
    *********************
    It describes what a function looks like. Can be used to generate as many overloaded functions each using different data types
*/

#include<iostream>

template <typename T, typename U>

auto max(T x, U y){
    return (x > y) ? x : y;
}

int main(){
    std::cout<< max(1,2.1); //as you can see here we are passing an int and a double so we need to have to different typenames and return type to be auto so the compiler can auto figure out what the return type of the template should be based on the values that are provided.
}