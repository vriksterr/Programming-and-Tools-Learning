/*
    ********
    * CHAR *
    ********

    char a[100];                    //declaring a char array a whose size is 100
    char a[100]{'a','b','c'};       //wrong coz there is no null character so it will keep on printing till the end of the array size and will have garbage values.
    char a[100]{'a','b','c','\0'};  //right as we have a null character so it will stop at that
    char a[100]{"abc"};             //this automatically declares a nullcharacter at the end
*/

#include <cstddef>
#include<iostream>
#include<cstring>   //strlen
using namespace std;

int main(){

    char a[]{"abcdefghi"};  //{'a','b','h','\0'};
    cout<< a <<endl;

    char b[100];
    cin>>b;

    cout<<b<<endl;
    cout<< strlen(a) <<endl;    //number of visible characters
    cout<< sizeof(a)<<endl;     // +1 because of null character


    //cin.get() // accept 1 char at a time but it reads all characters
}