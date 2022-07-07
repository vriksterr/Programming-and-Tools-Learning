/*
    ********
    * CHAR *
    ********
*/

#include <cstddef>
#include<iostream>
#include<cstring>
using namespace std;

int main(){

    char a[]{"abcdefghi"};  //{'a','b','h','\0'};
    cout<< a <<endl;

    char b;
    cin>>b;

    cout<<b<<endl;
    cout<< strlen(a) <<endl;    //number of visible characters
    cout<< sizeof(a)<<endl;     // +1 because of null character


    //cin.get() // accept 1 char at a time but it reads all characters
}