/*   __________________________
    |
    |__________________________

    ***************************
    *
    ***************************


    •
    •
    •

*/
#include<iostream>
#include<cstdio>
class Class{
    
        int a = 5;
};

int main() {
    
    Class A;
    auto value = (int*) &A;
    *value = 10;
    // std::cout<<*value;
    // printf(*value);
}