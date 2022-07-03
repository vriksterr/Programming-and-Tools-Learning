/*
    ****************************
    * Subarray Sum Brute Force *
    ****************************

    Basically find out the largest sum of the subarray
*/
#include <iostream>
using namespace std;

//Brute Force
int LargestSubarraySum_Brute_Force(int *arr,int size_of_array){
    int start{};
    int end{size_of_array-1};
    int largest_sum{};

    for(int i{}; i<size_of_array; i++){
        for(int j{i}; j<size_of_array; j++){

            int subarraysum{};

            for(int k{i}; k<=j; k++){
                subarraysum += arr[k];
            }
            //Put a check is subarraysum > largest_sum
            largest_sum = max(largest_sum,subarraysum);
        }
    }
    return largest_sum;
}


//Prefix Sum
/*
        for eg
        array  = 1,2,3,-2,3
        prefix = 1, 1+2, 1+2+3, 1+2+3-2, 1+2+3-2+3
               = 1,3,6,4,7

        now lets say we have to find out the sum of 2,3,-2
        so,
            ps[j]-ps[i-1]
             4   - 1    = 3
*/
int Prefix_Sum_Aproach(int *arr, int size_of_array){
    //prefix sum
    int prefix[100]{0}; //declaring an prefix array and passing 0 to all positions from 0 to 99
    prefix[0]=arr[0];   //first element in the prefex array will be replaced by arr[0] element which is 1
    
    for(int i{1}; i<size_of_array; i++){    //i started form zere coz we have done initialization for the 0 element int he array above already
        prefix[i]=prefix[i-1]+arr[i];       // this is doing the addition for prefix
    }

    //largest sum login
    int largest_sum{0};

    for(int i{0}; i<size_of_array;i++){
        for (int j{i}; j<size_of_array; j++) {
            
            // int subarraysum = i>0 ? prefix[j] - prefix[i-1] : prefix[j];   // cleaner way of writing it same as if else 
            if(i>0){
                int subarraysum{prefix[j]-prefix[i-1]};
                largest_sum = max(largest_sum,subarraysum);
            }
            else if(i==0){
                int subarraysum{prefix[j]};
                largest_sum = max(largest_sum,subarraysum);
            }
            
        }
    }
    return largest_sum;
}


//Kadane's Algorithm
/*
    array          = -2, 3, 4, -1, 5, -12, 6, 1, 3, 2
    current sum{0} =  0, 3, 7, 6, 11,   0, 6, 7,10,12     //here see ath when -1 was there the substraction didnot make current sum negative so we keept it but when -12 happned the current sum we had went -1 so we made current sum 0
    maximum sum{0} =  0, 3, 7, 7, 11,  11,11,11,11,12

    so what we do is:
        we add the current sum to the next element in the array and if the substraction makes it -ve value we just change current sum to zero 
        and start adding again and what ever is the maximum sum we keep increasing it but if the current sum got reset to 0 current 
        sum has to reach bigger than max sum for it to be the next bigger sum. Look at above example.

*/
int kadane_algo(int *arr,int size_of_array){
    int current_sum{0};
    int maximum_sum{0};

    for(int i{0};i<size_of_array;i++){
        current_sum += arr[i];
        if(current_sum<0){
            current_sum=0;
        }
        maximum_sum = max(maximum_sum,current_sum);
    }
    return maximum_sum;
}

int main(){

    // int arr[]{1,2,3,4,5,6,7,8,9,10};
    int arr[]{-2,3,4,-1,5,-12,6,1,3};
    int size_of_array{sizeof(arr)/sizeof(int)};

    //Brute Force
    cout<<"Brute Force Output: "<<LargestSubarraySum_Brute_Force(arr, size_of_array)<<endl;

    //Prefix sums
    cout<<"Prefix Sums Output: "<<Prefix_Sum_Aproach(arr, size_of_array)<<endl;

    //Kadane's Algorithm O(N) best possible solution in terms of time and space
    cout<<"Kadane's Algorithm Output: "<<kadane_algo(arr, size_of_array)<<endl;
}