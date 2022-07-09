/*
    ******************
    * Selection Sort *
    ******************

    Repeatedly find the minimum element from unsorted part and putting it at the beginning.
*/

#include <iostream>
using namespace std;

// insertion sort
void selection_sort(int *arr, int size_of_array) {
  for (int i{0}; i < size_of_array-1; i++) {    //we went -1 coz the last element by the time we sort will already be sorted meaning it will be in its position
      
      int current_element{arr[i]};   //we are copying the current element in the current_element
      int minimum_position{i};

      //find out the minimum element
      for(int j{i}; j<size_of_array; j++){
            if(arr[j] < arr[minimum_position]){
                minimum_position = j;
            }
      }
        //swaping outside the loop
        swap(arr[minimum_position],arr[i]);
    }
}
int main() {

  int arr[]{-2,3,100,4,-1,69,5,-2,6,1,3};
  int size_of_array{sizeof(arr) / sizeof(int)};

  cout << "Current Array: ";
  for (int i{0}; i < size_of_array; i++) {
    cout << arr[i] << ", ";
  }
  cout << endl;

  cout << "After Insertion Sort: ";
  selection_sort(arr, size_of_array);
  // printing
  for (int i{0}; i < size_of_array; i++) {
    cout << arr[i] << ", ";
  }
  cout << endl;
}