/*
    *****************
    * Counting Sort *
    *****************

    This algo can work in sometimes in linear time

     ________________________
    | Working of this method |
    |________________________|

    Lets say we have an array= 1,1,3,4,2,5,6,9,6

    so we make a counter that stores the number of times a integer as appeared in increasing 
    or decreasing order and once counting is done we replace those and place those in array
    and that will give us increasing or decreasing sorting
*/
#include<iostream>
#include<vector>
using namespace std;

void counting_sort(int *array, int size_of_array){
    //First finding the largest element in the array
    int largest_number{-1};     // this is assuming that all the integers in the array are positive integers else take 
    for(int i{0}; i<size_of_array; i++){
        largest_number = max(largest_number,array[i]);
    }

    //Second now we are going to count the number of times an integer is repeated in an array
    // as we dont know the largest number yet so are going to need a dynamic array or either we can do int *count = new int [largest + 1] this will give us an array OR we can use vectors that is also a dynamic array.
    vector<int>count_array(largest_number+1,0); //we have declared a vector with length largest_nmber+1 and initializing all the values to be 0 which will be incremented based on the counting that is going to happen.

    //Update the counter
    for(int i{0}; i<size_of_array; i++){
        count_array[array[i]]++;
    }

    //Putting back the elements from the count_array back original array
    int j{0};
    for(int i{0}; i<=largest_number; i++){
        
        while(count_array[i]>0){
            array[j] = i;
            count_array[i]--;
            j++;
        }
    }
    return ;
}

int main(){

    int array[]{88,97,10,12,15,1,5,6,12,5,8,6};
    int size_of_array{sizeof(array)/sizeof(int)};

    counting_sort(array,size_of_array);

    for (int i{0}; i<size_of_array; i++){
        cout<<array[i]<<", ";
    }
}