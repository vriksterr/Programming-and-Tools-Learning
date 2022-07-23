/*
    ***************
    * Bubble Sort *
    ***************

    Taking larger element to the end by repeatedly swapping the adjacent
   elements

     ________________
    | How it works ? |
    |________________|

    array= 5,4,3,2,1

    Step 1: we will compare 5 and 4 and see which is bigger and then swap, now 5 is at second position 
            4,5,3,2,1
    Step 2: now we will compare the second position 5  and 3 and see which is bigger and swap them 
            4,3,5,2,1 
    Step 3: continue the above steps until the largest element is at the end and then we move to the 
           next element 4 then 3 then 2 and at last 1 which will be already sorted.
*/

#include <iostream>
using namespace std;

// bubble sort
void bubble_sort(int *arr, int size_of_array) {
  for (int i{0}; i < size_of_array; i++) {
    for (int j{0}; j < size_of_array; j++) {
      if (arr[j] > arr[i])
        swap(arr[j], arr[i]);
    }
  }
}

int main() {

  int arr[]{5, 4, 3, 2, 1, 0, -1, -2, -3, -4, -12};
  int size_of_array{sizeof(arr) / sizeof(int)};

  cout << "Current Array: ";
  for (int i{0}; i < size_of_array; i++) {
    cout << arr[i] << ", ";
  }
  cout << endl;

  cout << "After bubble sort: ";
  bubble_sort(arr, size_of_array);
  // printing
  for (int i{0}; i < size_of_array; i++) {
    cout << arr[i] << ", ";
  }
  cout << endl;
}