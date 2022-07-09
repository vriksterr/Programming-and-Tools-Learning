/*
    *************************************
    * Sting, Copy, Compare, Concatinate *
    *************************************

*/
#include<iostream>
#include<cstring>   //strlen
using namespace std;

int main(){

    char a[1000]{"apple"};
    char b[1000];

    //claculate the length
    cout<<strlen(a)<<endl;

    //string copy: copy one string to another string
    strcpy(b,a);    //data of a is being stored in b

    //string compare: tells weather 2 strings are equal or not 
    cout<<strcmp(a,b)<<endl;    //if all the letters match it is going to return 0 not not same will return 1

    //concatinate
    char web[]{"www."};
    char domain[]{"vrikster.com"};
    cout<<strcat(web,domain)<<endl;

    //for example 
    strcpy(b,strcat(web,domain));   // we are basically copying the strcat to b using 2 different functions
}