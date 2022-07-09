/*
    **********************************************
    * Using cin.get() and how cin and cout works *
    **********************************************

    This is how cin works:
        when we type a sentence like "hello world" and hit enter it goes inside an input buffer and
        cin start reading the characters one by one and it stops at the first space and only stores hello, 
        this method is predefined in the iostream header file and it replaces the white space by a
        null character.

    So we use cin.get() function as it accept 1 char at a time but it can read everything including the 
    white spaces, but it is rarely used but good to know

    we are going to use cin.get() function we are gonna use cin.getline() instead.
*/

// Give a sentence, count  the number of alphabets, digits & spaces in the sentence

#include<iostream>
using namespace std;

int main(){

    /* we can do this in two ways either we can store and then count or read one by one and then count
       here we are doing the later */

    char ch;
    ch = cin.get();     //the first character we read from here

    //Count
    int alpha{},space{},digit{};

    while(ch!='\n'){

        if(ch>'0' && ch<='9'){
            digit++;
        }
        else if((ch='a' && ch<='z') or (ch>='A' && ch<='Z')){
            alpha++;
        }
        else if(ch==' ' || ch=='\t'){   //here \t is a tab
            space++;
        }
        ch = cin.get();     //the remaning character we read from here
    }

    cout<<"Total Alphabets"<<alpha<<endl;
    cout<<"Total Digits"<<digit<<endl;
    cout<<"Total Space"<<space<<endl;

    return 0;
}