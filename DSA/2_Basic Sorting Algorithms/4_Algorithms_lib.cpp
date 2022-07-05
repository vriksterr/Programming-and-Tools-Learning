/*
    **********************
    * Algorithms Library *
    **********************

    sort(); //use this as it works in O(NLogN) which is faster than bubble,insertion.selection sort as these take O(Nsquare)
*/

#include<iostream>
#include <algorithm>
using namespace std;

bool compare(int a,int b){
    return a>b; //this makes the sort sorting in decreasing order 
    // return a<b; //makes sort sorting in assending order 
}

int main(){

    int arr[]{10,9,7,6,5,4,3,2,11,16,8};
    int size_of_array{sizeof(arr)/sizeof(int)};

    sort(arr,arr+size_of_array,compare);    //here compare is not a fn call => passing(not calling) a function multiple times as parameter to another function. compare controls the comparision or direction the sorting should exceed also greater<int>() is a inbuilt funtion to do the ascending order
    // reverse(arr,arr+size_of_array);  //to reverse  the elements

    for(int i{}; i<size_of_array ;i++){
        cout<<arr[i]<<", ";
    }
    cout<<endl;

    return 0;
}