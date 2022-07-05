/*
    *****************
    * Array for DSA *
    *****************

    An array is a colletion of elements of the same type placed in contiguous memory
    location.

    -Create
    -Input
    -Output
    -Update

    Now we cannot store integers inside a string array, if we want to store integers we need to store it as
    integers basically the data should be of the same type as the other elements in the array.



*/

#include <iostream>
using namespace std;

int main() {
	

    int marks[100]{0};  // we used 0 here because we don't want random data at the 100 locations.

    int n;
    cout<<"Enter the no of students: ";
    cin>>n;

    //Input
    for(int i=0; i<n; i++){ //for each loop we are we are inputing integers at the corresponding i location
        cin>>marks[i];
    }

    //output
    for(int i=0; i<n; i++){
        cout<<marks[i]<<", ";
    }

	return 0;
}