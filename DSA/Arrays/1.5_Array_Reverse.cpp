/*
    *****************
    * Array Reverse *
    *****************

    Basically reversing the elements on a giving array

    Eg: an array 1,2,3,4,5 should look like 5,4,3,2,1

    so we are going to use swapping which is 5 swapped with 1 4 with 2 so on and so forth

*/

#include <iostream>

using namespace std;

//Problem: Reverse all the elements of a given array
void reverse_array(int *arr, int size_of_array){
    int start{};
    int end{size_of_array-1};

    while (start < end) {
        swap(arr[start], arr[end]);
        start+=1;
        end-=1;
    }

}

int main(){

    int arr[]{10,20,30,40,50,60,70,80,90,100};
    int size_of_array{(sizeof(arr)/sizeof(int))};

    //arr before the reverse function is called
    for(int i{}; i<size_of_array;i++){
        cout<<arr[i]<<", ";
    }
    cout<<endl;

    reverse_array(arr, size_of_array);
    
    //arr after the reverse function is called
    for(int i{}; i<size_of_array;i++){
        cout<<arr[i]<<", ";
    }
    cout<<endl;

    return 0;
}

/*
    Time complixity:    O(N)
    Space complixity: order of 1
*/