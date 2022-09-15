/*      Funtion Prototypes

    -The compiler must know about a funtion before it is used

        *-Define funtions before calling them
            -OK for small programs
            -Not a practical solution for larger programs

        *-What are Function Prototypes
            -Tells the compiler what it needs to know without a full funtion definition
            -Also called forward declarations
            -Placed at the beginning  of the program
            -Also used in our own header files (.h) - more about this later
            -As the program gets more complex we start adding these functions in our .h files
        
        *-Use of funtions prototypes
            -Ensures that calls to a function are made with the correct arguments
            -Many C compilers do not check for parameter matching causing undefinded behaviour at the compilation time
            -But C++ compilers do check for parameters matching and prototypes presence else it will through an error.
            -In C not C++ compilers missing arguments will result in unexpected behavior
            -A function prototype causes the compiler to flag an error if arguments are missing
        
        *-Advantages
            -Easier to navigate a program with main() at the top
            -Helps with debugging
            -Commonly used in header files

        Reference : https://www.youtube.com/watch?v=vc9A6HdrTz4
                    https://www.youtube.com/watch?v=5wAf9nzX2R8
                    https://www.youtube.com/watch?v=EQCw3zPdPv4
                    https://www.quora.com/What-is-function-prototype-Why-do-we-need-to-use-it
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