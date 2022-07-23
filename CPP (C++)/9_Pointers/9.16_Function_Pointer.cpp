// https://www.geeksforgeeks.org/function-pointer-in-c/
// https://www.geeksforgeeks.org/address-function-c-cpp/    // find the address of a function and why cout dosenot output address like c dose is coz of https://stackoverflow.com/questions/10321083/why-does-the-value-of-the-functions-address-is-1-in-c 
// https://stackoverflow.com/questions/9552663/function-pointers-and-address-of-a-function
// https://www.cprogramming.com/tutorial/function-pointers.html
// https://www.scaler.com/topics/c/function-pointer-in-c/

#include <iostream>
#include<stdio.h>
using namespace std;

void car(){
    
}

int main()
{
   cout<<"address of main() via cout<< operator: "<<&main<<endl;    //reason for this showing 1 as output is coz of the operator << read above in comment section
   printf("address of function main() is : %p\n", main);
   printf("address of function funct() is : %p\n", car);
   car();
}