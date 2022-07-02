/*

    ********************
    * Pass by Refrence *
    ********************

    -Sometimes we want to be able to change the actual parameter from within the function body
    -In order to achieve this we need the location or address of the actual parameter
    -We saw how this is the effect with array, but what about other variable types?
    -We can use refrence parameters to tell the compiler to pass in a reference to the actual parameter.
    -The formal parameter will now be an alias for the actual parameter

    -Basically if we want values to change we use pass by refrence & if dont the value to change the actual parameter we do pass by value
    -As sometime pass by value is very expensive as it is copying the data to a different memory address os better do use const


    For example:-

    void scale_number(int &num);   //Here you can see %num which is an alias of number that means we are now refrencing the actual parameter names number, that means if we change num we change number
                                   //It means we are pointing num to the memory address of number
    void scale_number_constant(const int &num);
    int main() {

        int number {1000};
        int &address_to_number{number};

        cout<<"address_to_number: "<<address_to_number<<endl;   //1000
        cout<<"address_to_number memory address: "<<&address_to_number<<endl;  //0x7ffe1965650c
        cout<<"number memory address: "<<&number<<endl;                    //0x7ffe1965650c

        scale_number(number);       //call
        cout << number << endl;     //100

        scale_number_constant(number);
        cout << number << endl;     //1000
        return 0;
    }

    void scale_number(int &num){
        
        if (num > 100)
        num = 100;
    }

    void scale_number_constant(const int &num){     // const will make sure that the value remains constant and dosent change
        
        if (num > 100)
        num = 100;      // ERROR
    }

*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void pass_by_ref1(int &num);
void pass_by_ref2(string &s);
void pass_by_ref3(vector<string> &v);
void print_vector(const vector<string> &v);  // const

void pass_by_ref1(int &num) {
    num = 1000;
}

void pass_by_ref2(string &s) {
    s = "Changed";
}

void pass_by_ref3(vector<string> &v) {
    v.clear();  // delete all vector elements
}

void print_vector( const vector<string> &v)  {
    for (auto s: v) 
        cout << s << " ";
    cout << endl;
}

int main() {
    int num {10};
    int another_num {20};
    
    cout << "num before calling pass_by_ref1: " << num << endl;
    pass_by_ref1(num);
    cout << "num after calling pass_by_ref1: " << num << endl;
    
    cout << "\nanother_num before calling pass_by_ref1: " << another_num << endl;
    pass_by_ref1(another_num);
    cout << "another_num after calling pass_by_ref1: " << another_num << endl;

    string name {"Frank"};
    cout << "\nname before calling pass_by_ref2: " << name << endl;
    pass_by_ref2(name);
    cout << "name after calling pass_by_ref2: " << name << endl;

    vector<string> stooges {"Larry", "Moe", "Curly"};
    cout << "\nstooges before calling pass_by_ref3: ";
    print_vector(stooges);
    pass_by_ref3(stooges);
    cout << "stooges after calling pass_by_ref3: ";
    print_vector(stooges);
    
    cout << endl;
    return 0;
}

