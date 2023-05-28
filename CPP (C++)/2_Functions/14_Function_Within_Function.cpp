/*
    ****************************
    * Function within Function *
    ****************************

    So we can have Functions within Function with either the Help of Lamdas or Classes both are touched more in depth later in the Notes.

    Source: https://stackoverflow.com/questions/4324763/can-we-have-functions-inside-functions-in-c

*/

#include<iostream>
using namespace std;

int main(){

// Via Class
    class omg{
    public:
        static void cool(){
        cout<<"Hello you just Initiated Function cool() inside the main() Function Using Class Method"<<endl;
        }
    };
    
    omg dude;
    dude.cool();

// Via Lamdas
    auto print_message = [](){cout<<"Hello you just Initiated Function print_message() inside the main() Function Using Lamda Method";};     //based on the return type auto self assignes print_message to either be a void func() or int func() if there was a return 1; at the end.
    
    print_message();
}