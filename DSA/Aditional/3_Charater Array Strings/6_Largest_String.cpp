 /*
    **************************
    * Largest String Problem *
    **************************

    Problem: Read N no of Strings and print the largest string. Each string can have upto 1000 characters.
 */

#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int number_of_strings;
    cout<<"Enter the no. of strings you want to compare to find the largest one: ";
    cin>>number_of_strings;
    //after we take user input user is pressing \n so cin.get() will consume that character then after that the loop will read the remaing characters
    cin.get();

    char sentence[1000];
    char largest[1000];

    int largest_length{0};

    while(number_of_strings--){
        cin.getline(sentence,1000);
        int length = strlen(sentence);
        if(length > largest_length){
            largest_length = length;
            strcpy(largest,sentence);
        }
    }

    cout<<"Largest sentence is: "<<largest<<endl;
}