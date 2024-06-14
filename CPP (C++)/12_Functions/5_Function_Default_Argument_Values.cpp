/*  
    *********************************
    *    Default Argument Values    *
    *********************************

    -When a function is called, all arguments must be supplied
    -But sometimes some of the arguments have the same values most of the time
    -We can tell the compiler to use default values if the arguments are not supplied
    -Default values can be in the prototype or definition, not both
        -best practice - in prototype
        -must appear at the tail end of the parameter list

    -Can have miltiple default values
        -must appear consecutively at the tail end of the parameter list

*/

#include<iostream>

using namespace std;

double calc_cost(double base_cost,double tax_rate = 0.06, double shipping = 3.50);  // multiple default argument values, also once you assign a default value after that all the other variables after it also have to have a value assigned to them and also cannot use {} or () for assigning values to shipping

    double calc_cost(double base_cost,double tax_rate,double shipping){
        return base_cost += (base_cost * tax_rate) + shipping;
    }

int main(){

    double cost {0};
    cost = calc_cost(100.0, 0.08, 4.25);    //will use no defaults
    cost = calc_cost(100.0, 0.08);          //will use default shipping
    cost = calc_cost(200.0);                //will use default tax and shipping

    cout<<cost;
    return 0;

}