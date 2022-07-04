/*
    ******************************************
    * Arrays & Functions - Pass by Reference *
    ******************************************

    The reason we do array pass by reference is coz array is a memory address when we type just arr like below
    in the program and when we type arr[0] we are getting the value at starting address of array
*/

#include <iostream>
using namespace std;

void printArray(int *arr, int n){
    
    cout<<"In Function "<<sizeof(&arr)<<endl;    //size of arr here will be 8 coz thats the size of pointers which is of 8 bytes
    cout<<"In Function &arr is: "<<&arr<<" and arr is: "<<arr<<endl;    // Here &arr is address of pointer and arr is the address *arr has sotred
        for (int i=0; i<n ; i++){
            cout<<arr[i]<<", "<<endl;
    }
}

int main(){
    //function to pass by reference
    int arr[]{1,2,3,4,5,6};

    int n{sizeof(arr)/sizeof(int)};

    for (int i=0; i<n ; i++){
        cout<<arr[i]<<", "<<endl;
    }

    cout<<"In Main "<<sizeof(arr)<<endl;
    cout<<"Array arr is an address :"<<arr<<endl;
    printArray(arr,n);

}