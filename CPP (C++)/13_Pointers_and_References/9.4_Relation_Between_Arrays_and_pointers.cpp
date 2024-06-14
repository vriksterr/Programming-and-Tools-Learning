/*
    ********************************************
    * Relationship Between Arrays and Pointers *
    ********************************************

    IF you understand that c++ dosent really have true arrays, and the arrays are 
    just the addressof the first element in a chunk of memory then this makes sense.

    -The value of an array name is the address of the first element in the array
    -The value of a pointer variable is an address
    -If the pointer points to the same data type as the array element then the pointer and array name can be used interchangeably (almost)

    For Example:

    int scores[]{100, 95, 89};

    cout << scores << endl;     // 0x61fec8
                                // Here score = address of first block

    cout << *scores << endl;    // 100  
                                //basically means memory address + 0 offset
                                // this can also mean *(score_ptr + 0)
    int *score_ptr{scores};

    cout << score_ptr << endl;  // 0x61fec8
    cout << *score_ptr << endl; // 100

    //Check how the Hex values increased when we search the pointer pointing to array as we are not adding 1 we are adding the size of int to the hex which is 4 bytes
    
    int *hex_ptr{scores};

    cout << hex_ptr << endl;        // 0x61ff10
    cout << (hex_ptr + 1) << endl;  // 0x61fe14
    cout << (hex_ptr + 2) << endl;  // 0x61fe18

    Now you might thing why is it like this !
    -Well when we call an array like scores it will output the address of where the first element is stored

   
   
   ******** 
   *Offset*
   ********

    Subscript and Offset Notation Equivalance

    ____________________________________
   |    int array_name[]{1,2,3,4,5};    |
   |    int *pointer_name{array_name};  |
   |____________________________________|
   _________________________________________________________
  |     Subscript Notation      |       Offset Notation     |
  |_____________________________|___________________________|
  |     array_name[index]       |    *(array_name + index)  |
  |     pointer_name[index]     |    *(pointer_name + index)|
  |_____________________________|___________________________|
*/

#include <iostream>

using namespace std;

int main() {
    
    int scores[] {100, 95, 89};
    
    cout << "Value of scores: " << &scores << endl;     
    
    int *score_ptr {scores};
    cout << "Value of score_ptr: " << score_ptr << endl;
    cout << "Data Stored in score_ptr: " << *score_ptr << endl;

    cout << "\nArray subscript notation -------------------------" << endl;
    cout << scores[0] << endl;
    cout << scores[1] << endl;
    cout << scores[2] << endl;

    cout << "\nArray Memory Address Location-----------------------" << endl;
    cout << &scores[0] << endl;
    cout << &scores[1] << endl;
    cout << &scores[2] << endl;
    
    cout << "\nPointer subscript notation -------------------------" << endl;
    cout << score_ptr[0] << endl;
    cout << score_ptr[1] << endl;
    cout << score_ptr[2] << endl;
    
    cout << "\nPointer offset notation-------------------------" << endl;
    cout << *score_ptr << endl;
    cout << *(score_ptr + 1) << endl;
    cout << *(score_ptr + 2) << endl;
    
    cout << "\nArray offset notation-------------------------" << endl;
    cout << *scores << endl;
    cout << *(scores + 1) << endl;
    cout << *(scores + 2) << endl;
    
    cout << endl;
    return 0;
}