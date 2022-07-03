/*
    *****************
    * Binary Search *
    *****************

    In binary search the elements should be arranged in alphabatical order of if thery are integers then they are 
    either increasing or decreasing order. os it is basically a sorted array searching.

     _________________________________
    | How Binary Search is Executed ? |
    |_________________________________|

    1. Find the starting, middle and ending point in the array 
    2. IF the number lies to the right side of mid we discard the left side and middle element.
    3. We repeat 1 and 2nd steps with the right side and constinue it will we fing the desired element we were
       searching for in the array
    4. start = mid + 1 and if start > element we are searching for then it is not present in the array.

    On each elemination of one side we are reducing the array by N/2

     ______________________
    | Overview of the code |
    |______________________|

    Start = 0 , End = n-1   // n is the size of array

    while (Start <= End){

        find mid
        Do comparison at mid
                        |-   Equal      // if it is equal then return mid
                        |- > Left or
                        |- < Right
    }

    // if it is out of loop return -1 meaning element is not present in the loop

*/

//Binary Search
#include<iostream>
using namespace std;

int Binary_Search(int *arr,int size_of_array,int key){

    int start{0};
    int end{size_of_array-1};

    while(start<=size_of_array){                        //this loop will keep running till the condion is meat 
        
        int middle_element{(start + end)/2};

        if(arr[middle_element] == key){
            return middle_element + 1;  //as the array address starts form 0 so we need to add +1 to it for human reading
        }

        else if (arr[middle_element] > key) {
            end = middle_element - 1;
        }
        else if (arr[middle_element] < key) {
            start = middle_element + 1;
        }
    }
    
    return -1;  // Item not found 
}

int main(){

    int arr[]{10,20,30,40,50,60,70,80,90,100,110,120};
    int size_of_array{sizeof(arr)/sizeof(int)};
    int key{};
    
    //Displaying the array
    cout<<"The array that we have is: ";
    for(int i{0}; i<size_of_array; i++){
        cout<<arr[i]<<", ";
    }
    cout<<" with no. of elements being: "<<size_of_array<<endl;

    cout<<"Please Enter the key you want to search for: ";
    cin>>key;

    int index{Binary_Search(arr,size_of_array,key)};

    if(index != -1){
        cout<<"The element is present at: "<<index<<" position"<<endl;
    }
    else{
        cout<<"The element is not present in the array!";
    }
}