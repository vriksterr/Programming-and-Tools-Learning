/*      Funtion Prototypes

    -The compiler must know about a funtion before it is used

        -Define funtions before calling them
            -OK for small programs
            -Not a practical solution for larger programs

        -Use funtions prototypes
            -Tells the compiler what is needs to know without a full funtion definition
            -Also called forward declarations
            -Placed at the beginning  of the program
            -Also used in our own header files (.h) - more about this later
            -As the program gets more complex we start adding these functions in our .h files 
*/

#include<iostream>

using namespace std;

//Funtion protopypes also called Funtion Decleration
//Either we can just define it here of have the whole funtion here as well rather than seprating like we are doing now
double calc_volume_cylinder(double radius, double height);
double calc_area_circle(double);       // compiler only cares about the type of the parameter which in this case is a double but for documentation purposes you can type "double radius"
void area_circle();
void volume_cylinder();
void addition (int , int );            //just a understanding how void works

const double pi = 3.14159;

int main() {
    area_circle();
    volume_cylinder();
    addition(5,6);
    return 0;
}

//Function Defination
double calc_volume_cylinder(double radius, double height) {
   // return pi *radius * radius * height;
   return calc_area_circle(radius) * height;
}

double calc_area_circle(double radius) {
    return pi * radius * radius;
}

void area_circle() {
    double radius {};
    cout << "\nEnter the radius of the circle: ";
    cin >> radius;
    cout << "The area of a circle with radius " << radius << " is " << calc_area_circle(radius) << endl;
}

void volume_cylinder() {
    double radius {};
    double height {};
    cout << "\nEnter the radius of the cylinder: ";
    cin >> radius;
    cout << "Enter the height of the cylinder: ";
    cin >> height;
    cout << "\nThe volume of a cylinder with radius " << radius << " and height " << height << " is " << calc_volume_cylinder(radius, height) << endl;
}

void addition (int a, int b){

    cout<<endl<< a + b<<endl;
}