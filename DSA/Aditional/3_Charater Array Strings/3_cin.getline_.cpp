/*
    ******************
    * cin.getline(); *
    ******************
    The C++ getline() is a standard library function that is used to read a string or a line from an 
    input stream

    Instead of reading a single character like in cin.get we can instead read entire sentence using 
    cin.getline();

    Why do we need this over cin.get(); :
        well in that we would also have to check our length dosent exceed the sentence array, which is
        an aditional check which is already inbuilt in cin.getline

    In cin.getline(); it dosent matter how many white spaces it will automatically terminate when it sees
    the new line.
*/

#include<iostream>
using namespace std;

int main(){

    char sentence[1000];         //array of length 1000 declared.
    cin.getline(sentence, 1000); //so what dose is it reads and stores it inside sentence and we have told cin.getline function that the amount of letters it can hold is 1000
    cout<<sentence<<endl;


    char paragraph[1000];
    cin.getline(paragraph, 1000, '.');  //now we give an aditional stopping parameter, basically telling that to stop when we see a dot. (remember that dot wont be printed in the output)
}