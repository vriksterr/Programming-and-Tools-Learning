/* 
   So basically i discovered by mistake if i cout a function without () it outputs 1 
   the answer is simple:

   Lets say we have made a function func(){} and we cout this function like cout<<func; we get 1 coz

   You're not actually calling pr in your code, you're passing the function pointer to cout. 
   pr is then being converted to a bool when being passed to cout. 
   If you put cout << boolalpha beforehand you will output true instead of 1.
   
   References: https://stackoverflow.com/questions/17073066/g-calling-a-function-without-parenthesis-not-f-but-f-why-does-it-alwa
               https://www.geeksforgeeks.org/address-function-c-cpp/#:~:text=We%20can%20get%20the%20address,pointer%20in%20C%20for%20details.&text=In%20C%2FC%2B%2B%2C%20name,to%20find%20address%20of%20function. 
   
   Also now i am also interested in calling one function from another pointer and this is
   how we can do below !

   References: https://www.geeksforgeeks.org/function-pointer-in-c/
   

*/
#include <iostream>
#include <stdio.h>  //using this so we can find the address of the function as cout converts the address to bool(true or false)
using namespace std;

void func (string message)
{
    cout<<"Wooohoo its printing!!! ";
    cout<<message;
}

int main()
{

    func;
    cout << func;  // output: 1
    cout << *func; // output: 1
    cout << &func; // output: 1

    cout<<endl<<"=============="<<endl;
    auto *ptr = func;
    printf("address of function main() is :%p\n", main);
    printf("address of function pr() is : %p\n", func);
    printf("address of function ptr is : %p\n", ptr);
    cout<<endl<<"=============="<<endl;

    cout<<"Calling function from another pointer:-"<<endl;
    void (*fun_ptr)(string) = &func;
    (*fun_ptr)("Now time to learn more C++ 😎");

}