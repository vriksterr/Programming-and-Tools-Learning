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
// #include<iostream>
// using namespace std;

// int main(){

    

// }

#include <iostream>
#include<stdio.h>
using namespace std;

bool car(){
    printf("address of function main()", car);
    return &car;
}

int main()
{
//    std::cout << (void*)&main << '\n';
//    cout<<endl<<addressof(main)<<endl;
printf("address of function main() is :%p\n", main);
printf("address of function funct() is : %p\n", car);
   car();
}