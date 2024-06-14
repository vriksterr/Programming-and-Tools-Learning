/*

    *******************************
    * Implementing Member Methods *
    *******************************

    • Very similar to how we implemented functions
    • Member methods have access to member attributes
        • So you don't need to pass them as arguments!
    • Can be implemented inside the class declaration
        • Implicitly inline
    • Can be implemented outside the class declaration
        • Need to use Class_name: :method_name
    • Can separate specification from implementation
        •.h file for the class declaration 
        •.cpp file for the class implementation

     _____________________________
    | Implementing Member Methods |
    |_____________________________|

    Inside the class declaration

    class Account {

        private:
            double balance;
        
        public:
            void set_balance(double bal){
                balance = bal;
            }
            doudble get_balance(){
                return balance;
            }
    };

     _______________________________
    | Outside the class declaration |
    |_______________________________|

     class Account {

        private:
            double balance;
        
        public:
            void set_balance(double bal);
            doudble get_balance();
    };

    void Account::set_balance(double bal){
                balance = bal;
            }
    doudble Account::get_balance(){
                return balance;
            }

     _____________________________________________
    | Seprating Specification from Implementation |
    |_____________________________________________|

    Account.h   // will become specification for Account.cpp

    //Include Guards(are preprocessor directives)( meaning the compiler will compile this file only once so if the file is included by more than 1 cpp file then the compiler will see the declaration of the account class more than once and give us an error about duplications )
    #ifndef _ACCOUNT_H_      //if not defined it will move to define and define it ( this cleacks to see if the preprocessor symbol named _ACCOUNT_H_)
    #define _ACCOUNT_H_      //if it is defined then it skips to the #endif
    //#pragma once           //same as above include guard but some compilers dont support it so check the compiler support
    class Account{

        private:
            double balance;
        public:
            void set_balance(double bal);
            double get_balance();
    };
    #endif
    -----------------------------------------------------
    Account.cpp     // will become implementation/source

    #include "Account.h"    / <> means seasrch system directive "" means search in current project folder

    void Account::set_balance(double bal){
        balance = bal;
    }

    double Account::get_balance(){
        return balance;
    }

*/

// Implementing member methods 2
#include <iostream>
#include "Account.hpp"      //Dont include cpp include .h instead some issue with vscode tho it will work 

using namespace std;

int main() {
    Account frank_account;
    frank_account.set_name("Frank's account");
    frank_account.set_balance(1000.0);
    
    if (frank_account.deposit(200.0))
        cout << "Deposit OK" << endl;
    else 
        cout << "Deposit Not allowed" << endl;
        
    if (frank_account.withdraw(500.0))
        cout << "Withdrawal OK" << endl;
    else
        cout << "Not sufficient funds" << endl;
        
    if (frank_account.withdraw(1500.0))
        cout << "Withdraw OK" << endl;
    else
        cout << "Not sufficient funds" << endl; 
    
    return 0;
}