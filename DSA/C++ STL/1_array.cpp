/*
    *********
    * Array *
    *********

    Functions:  empty() //will  tell if array is empty of not
                front()
                back()
                size()
*/
#include<array> // C++ STL library

#include<iostream>

using namespace std;

int main(){

    int basic_array[3]{1,2,3};
    
    //STL style array which is based on the basic array but it gives us aditional functionality
    array<int,4> stl_style_array{1,2,3,4};

    int size{stl_style_array.size()};   //array.size will give the size of the array
    cout<<"Element at 2nd position in the array is-> "<<stl_style_array.at(2);
    cout<<"Array Empty or not-> "<<stl_style_array.empty()<<endl;   //.empty will give a bool output telling weather the given array is empty or not and also we cannot use basic_array here either only stl_style_array coz that is part of the array header class.
    cout<<"Array First Element-> "<<stl_style_array.front()<<endl;  //will give first element of an array
    cout<<"Array Last Element-> "<<stl_style_array.back()<<endl;    //will give last element of an array

}
    