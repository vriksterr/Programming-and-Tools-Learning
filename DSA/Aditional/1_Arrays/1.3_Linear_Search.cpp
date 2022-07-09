/*
    *****************
    * Linear Search *
    *****************

    Also called Brute Force technique and it is a searching algorithm to find the index of an element in a 
    givem array.

    For Example:
        If we go to a restaraunt which has a long menu and we wanted pizza we would scroll through the menu to 
        find what we want to eat line by line and that is linear search.
*/

//Linear Search Array
#include<iostream>
using namespace std;

int linear_search(int *arr, int size_of_array, int key){   //here arr is the array we are going to pass by reference, key is the thing we are searching for in the array

        for(int i{0}; i<size_of_array; i++){
            //Check if the current element  matches with the key if it done it return the i and funtion finishes
            if(arr[i]==key){
                return (i+1);   //as the array address starts form 0 so we need to add +1 to it for human reading
            }
        }
        //item not found in the array
            return -1;
}

int main(){

    int arr[]{4,33,55,77,3,5,2,67,88,336,88,46,37};
    int size_of_array{sizeof(arr)/sizeof(int)};     //This will give the number of total elements in the array as it will find the total size of the array and divide that size by size of single int therefore giving no. of elements in an array
    
    cout<<"The arr data which we have here is: ";

    for(int i{0}; i<size_of_array; i++){
        cout<<arr[i]<<", ";
    }
    cout<<endl;

    int key{};
    cout<<"Please enter the key you want to search: ";
    cin>>key;

    int index{linear_search(arr, size_of_array, key)};

    if (index != -1) {
        cout<<"the key you entered is present at index: "<<index<<" in the array!"<<endl;
    }
    else{
        cout<<"the key you entered in not present"<<endl;
    }
}

/*
    Time compliexity: Linear

        the number of operation will be perportional to N ( a graph with a straight line )
        so complexity is order of n O(N) coz the larger the N larger the time taken to itterate through it
*/