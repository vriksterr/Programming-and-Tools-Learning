#include<iostream>
#include<iomanip>
int main(){
        float a = (double)3.123456789123456789;    //the reason why we use f here even tho the variable is a float coz the compiler will consider it as a double by default so we use the suffix to tell compiler to treat it as a float
        double b = (double)3.123456789123456789;
        int c = (int)3.123456789123456789;
        long double d = 3.123456789123456789L;

        std::cout<< std::setprecision(20);
        std::cout <<a<<std::endl;
        std::cout <<b<<std::endl;
        std::cout <<c<<std::endl;
        std::cout <<d<<std::endl;
        return 0;
}