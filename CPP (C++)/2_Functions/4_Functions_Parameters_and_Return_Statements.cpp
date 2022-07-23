/*      Funtion Parameters and Return Statements

        -When we call a function we can pass in data to that function
        -In the function call they are called arguments
        -In the function definition they are called parameters
        -They must match in number,order,and in type

        Eg.

        int add_numbers(int,int);   //prototype

        int main(){
            int result{0};
            result=add_numbers(100,200);    //call
            return 0;
        }

        int add_numbers(int a, int b){      //definition
            return a+b;
        }


        Pass-by-value

        -When you pass data into a function it is passed-by-value
        -A copy of the data is passed to the function
        -Whatever changes you make to the parameter in the function dose not affect the argument that was passed in.

        Forman vs Actual Parameters
            -Formal parameters-the parameters defined in the function header
            -Actual paramerters-the parameter used in the function call,the arguments

        Eg.

        void param_test(int formal){    //formal is a copy of actual
            cout<< formal << endl;      //50
            formal = 100;               //only changes the local copy
            cout<<formal<<endl          //100
        }

        int main(){
            int actual{50};
            cout<<actual<<endl; //50
            param_test(actual); //pass in 50 to param_test (copy of 50)
            cout<<actual<<endl; //50 - did not change
            return 0;
        }


        Function Return Statement

        -If a funtion return a value then it must use a return statement that returns a value
        -If a function dose not return a value (void) then the return statement is opitional
        -return statement can occur anywhere in the body of the function
        -return statement immediately exits the function
        -We can have multiple return statements in a function
            -Avoid many return statements in a function
        -The return value is the result of the function call

*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void pass_by_value1(int num);
void pass_by_value2(string s);
void pass_by_value3(vector<string> v);
void print_vector(vector<string> v);

void pass_by_value1(int num) {
    num = 1000;
}

void pass_by_value2(string s) {
    s = "Changed";
}

void pass_by_value3(vector<string> v) {
    v.clear();  // delete all vector elements
}

void print_vector(vector<string> v) {
    for (auto s: v) 
        cout << s << " ";
    cout << endl;
}

int main() {
    int num {10};
    int another_num {20};
    
    cout << "num before calling pass_by_value1: " << num << endl;
    pass_by_value1(num);
    cout << "num after calling pass_by_value1: " << num << endl;
    
    cout << "\nanother_num before calling pass_by_value1: " << another_num << endl;
    pass_by_value1(another_num);
    cout << "another_num after calling pass_by_value1: " << another_num << endl;

    string name {"Frank"};
    cout << "\nname before calling pass_by_value2: " << name << endl;
    pass_by_value2(name);
    cout << "name after calling pass_by_value2: " << name << endl;

    vector<string> stooges {"Larry", "Moe", "Curly"};
    cout << "\nstooges before calling pass_by_value3: ";
    print_vector(stooges);
    pass_by_value3(stooges);
    cout << "stooges after calling pass_by_value3: ";
    print_vector(stooges);
    
    cout << endl;
    return 0;
}

