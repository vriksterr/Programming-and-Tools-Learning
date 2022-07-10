/* find minimum and maximum in an array

First way: we can sort the array in assending order and output the start as smallest and end as 
           biggest element in an array O(n log n)

Best way: min max method O(n)

*/

#include<iostream>
using namespace std;

void min_max(int *arr, int sizeofarray){
    //keeping the first and second from the array as min and max then we are going to itterate over to find out result
    int min{arr[0]};
    int max{arr[1]};

    for(int i{2}; i<sizeofarray; i++){  //started from 2 coz 0 and 1 are saved in the min and max

        if(arr[i]<min){
            min = arr[i];
        }
        else if(arr[i]>max){
            max = arr[i];
        }
    }

    cout<<"MIN: "<<min<<endl;
    cout<<"MAX: "<<max<<endl;

}


int main(){

    int array[]{5,2,66,22,3,100,85,45};
    int sizeofarray{sizeof(array)/sizeof(int)};

    min_max(array,sizeofarray);
}