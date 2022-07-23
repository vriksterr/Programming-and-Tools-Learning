/*

    ****************
    * this Pointer *
    ****************

    • this is a reserved keyword in C++
    • Contains the address of the object - so it's a pointer to the object that is currently being used by class member methods
    • Can only be used in class scope
    • All member access is done via the this pointer
    • Can be used by the programmer
        • To access data member and methods 
        • To determine if two objects are the same (more in the next section) 
        •Can be dereferenced (*this) to yield the current object

    For Example:

        void Account::set_balance(double bal){
            balance = bal;      //this->balance is implied by the compiler 
        }
    
    Example2:
    To disambiguate identifier use:

        void Account::set_balance(double balance){
            balance = balance;      //which balance? The parameter
        }

        void Account::set_balance(double balance){
            this->balance = balance;    //Unambiguous means the above balance gets assigned to the class baalance
        }
    
    Example3:
    To determine object identity
    • Sometimes its useful to know if two objects are the same object
        
        int Account::compare_balance (const Account &other) {
             if (this == &other)
        std::cout << "The same objects" << std::endl;
        ...
        }

        frank_account.compare_balance (frank_account);
        
    •We'll use the this pointer again when we overload the assignment operator
*/