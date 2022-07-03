/*
    ******************
    * Printing Pairs *
    ******************

    so for a given array we are making a loop
    For Eg.

    for this array: 1,2,3
    do this: 1,1 1,2 1,3 2,1 2,2 2,3 3,1 3,2 3,3
*/

#include<iostream>
using namespace std;

//Problem: Print all pairs of elements
void print_pairs_from_array(int *arr,int size_of_array){
    //Print all the elements(2 Nested Loop)
    for(int i{}; i<size_of_array; i++){
        int x{arr[i]};

        for(int j{i+1}; j<size_of_array; j++){
            int y{arr[j]};

            cout<<x<<", "<<y<<endl;
        }
        cout <<endl;
    }
}

int main(){

    int arr[]{10,20,30,40,50,60,70,80,90,100};
    int size_of_array{(sizeof(arr)/sizeof(int))};

    //arr before the function is called
    for(int i{}; i<size_of_array;i++){
        cout<<arr[i]<<", ";
    }
    cout<<endl;

    print_pairs_from_array(arr, size_of_array);
    
    return 0;
}