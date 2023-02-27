/*
    **********************
    * namespace's in c++ *
    **********************

    In C++ you will notice a term such as this 
        using namespace std;
        using std::cout;
        using std::cin;
    We use this so we dont have to rewrite the std:: again and again if we are using it multiple
    times in our program.

    We can also use namespace to define our own name spaces for example below
*/
#include<bits/stdc++.h>
using std::cout;
using std::endl;
    //or
using namespace std;    //now you might see that we are using first std::__ and then we are using namespace std, we can basically do this but dosent seem any usefull but we can use it if needed.

//namespace can only be defined outside main() function
namespace vrikster{
    int val = 10;

    int getVal(){
        return val*10;
    }
}

namespace vineet{
        int val = 20;

        int getVal(double val2){
            val = val2;
            return val *20;
        }
}

int main(){

    double val = 30;

    cout<<"Value of double which is inside main() is: "<<val<<endl;
    cout<<"Value of int inside vineet namespace is: "<<vineet::val<<endl;
    cout<<"Value of int inside vrikster namespace is: "<<vrikster::val<<endl<<endl;

    cout<<"Value of the getval() in vineet: "<<vineet::getVal(val)<<endl;
    cout<<"Value of the getval() in vriskter: "<<vrikster::getVal()<<endl;

}