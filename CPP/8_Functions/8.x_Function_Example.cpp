#include<iostream>

using namespace std;

void param_test(int formal){
    cout<<"Formal Paramerets is running"<<endl;
    cout<<formal<<endl;
    formal=100;
    cout<<formal<<endl;
}

int main(){
    cout<<"Actual Paramerets is running"<<endl;
    int actual{50};
    cout<<actual<<endl;
    param_test(actual);
    cout<<"Actual Paramerets is running"<<endl;
    cout<<actual<<endl;
    return 0;
}