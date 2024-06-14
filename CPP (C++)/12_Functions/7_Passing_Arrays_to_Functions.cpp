/*  
    ******************************
    * Passing Array To Functions *
    ******************************

    -We can pass an array to a function by providing square brackets in the formal parameter description
        
        void print_array (int numbers[])

    -THe array elements are not copied just the location is sent over
    -Since the array name evaluates to the location of the array in memory - this address is what is copied 
    -So the function has no idea how many elements are in the array since all it knows is the location of the first element (the name of the array)

    
    The Error Example :-

    void print_Array(int numbers[]);

    int main() {

        int my_numbers[] {1,2,3,4,5};
        print_array(my_numbers);
        return 0;
    }

    void print_array(int numbers[]) {

        //Dosent know how many elements are in the array???
        //we need to pass in the size!!
    }

    The Corrent Example :-

    void print_Array(int numbers[], size_t size);

    int main() {

        int my_numbers[] {1,2,3,4,5};
        print_array(my_numbers,5);      //1 2 3 4 5
        return 0;
    }

    void print_array(int numbers[], size_t size) {

        for(size_t i{0} ; i < size ; ++i)
        
        cout<< numbers[i] <<endl;
    }



    *********************
    *  Const Parameters *
    *********************

    -We can tell the compiler that function parameters are const (read-only)
    -This could be useful in the print_array function since it should NOT modify the array

    void print_array(const int numbers[], size_t size){

        for(size_t i{0} ; i < size ; ++i)
        cout<< numbers[i] << endl;

        numbers[i] = 0;     //any attemp to modify the array will result in the compuler error
    }

*/

#include <iostream>

using namespace std;

void print_array(const int arr[], size_t size);
void set_array(int arr[], size_t size, int value);

void print_array(const int arr[], size_t size) {  // const
    for (size_t i{0}; i < size; ++i)
        cout << arr[i] << " ";
    cout << endl;
   // arr[0] = 50000; // bug
}

// set each array element to value
void set_array(int arr[], size_t size, int value) {
    for (size_t i{0}; i < size; ++i)
        arr[i] = value;
}

int main() {
    int my_scores[] {100, 98, 90, 86, 84};
    
    print_array(my_scores, 5);
    set_array(my_scores, 5, 100);
    print_array(my_scores, 5);
    print_array(my_scores, 5);
    
    cout << endl;
    return 0;
}

