/*
    ******************
    * Insertion Sort *
    ******************

    Insertion sort is like a deck of cards like cards numbers where we make space for the card that is supposed  to
    be placed in between of the cards 

    For eg.
    array = 5,4,1,2,3

    Watch the video for what we have to do.
    https://www.youtube.com/watch?v=nKzEJWbkPbQ

*/

#include <iostream>
using namespace std;

// insertion sort
void insertion_sort(int *arr, int size_of_array) {
  for (int i{1}; i < size_of_array; i++) {
      
      int current_element{arr[i]};   //we are copying the current element in the current_element
      int previous_element{i-1};

      while(previous_element>=0 && arr[previous_element] > current_element){
            
            arr[previous_element+1] = arr[previous_element];    //we are shifting the previous element to the next box
            previous_element = previous_element - 1;
                
      }
      arr[previous_element + 1] = current_element;  //we did previous_element + 1 coz it needs to come back to the spot where it  needs to copy current_element
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
  insertion_sort(arr, size_of_array);
  // printing
  for (int i{0}; i < size_of_array; i++) {
    cout << arr[i] << ", ";
  }
  cout << endl;
}