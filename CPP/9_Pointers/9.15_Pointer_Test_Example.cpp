#include<iostream>
#include<string>
using namespace std;

    int main() {
        int x{100};
        int y {x+200};
        cout<<y<<endl;
        int number {1000};
        number = 2000;
        int *pointt {&number};
        int &reference{number};
       reference = 3000;

        cout<<*pointt<<endl;
        cout<<pointt<<endl;
        
        cout<<&number<<endl;
        cout<<&pointt<<endl;

        cout<<"Reference: "<<reference<<endl;
        cout<<"Reference Address: "<<&reference<<endl;

        return 0;
    }