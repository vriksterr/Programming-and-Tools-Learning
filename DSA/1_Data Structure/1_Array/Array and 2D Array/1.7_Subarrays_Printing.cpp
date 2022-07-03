/*
    **********************
    * Subarrays Printing *
    **********************

    A subarray is a smaller continuous part of the array

    For Eg:

    arr = 1,2,3,4,5,6,7,8,9

    sub array is like 2,3,4 or 1,2,3 or 7,8,9 but not 1,2,4 or 2,3,6
*/

#include <iostream>
using namespace std;

int subarray(int *arr,int size_of_array){
    int start{};
    int end{size_of_array-1};

    for(int i{}; i<size_of_array; i++){
        for(int j{i}; j<size_of_array; j++){
            for(int k{i}; k<=j; k++){
                cout<<arr[k]<<", ";
            }
            cout<<endl;
        }
    }
    return 0;
}

int main(){

    int arr[]{1,2,3,4,5,6,7,8,9,10};
    int size_of_array{sizeof(arr)/sizeof(int)};

    subarray(arr, size_of_array);
}