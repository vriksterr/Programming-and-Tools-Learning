/*
    C++ has an STL (Standard Template Library) it provides libraries for implementation of basic 
    data structures and basic algorithms which are useful from interview standpoint as we dont have
    to implement these basic dsa from scratch

    STL in C++ can be divided into 2 parts 1 is containers and another one is algorithms

    Containers:
        Simple: pair,vector,forward list, forward_list
        Sequence Containers: Array, Vector, Deque, List, forward-list
        Container adapters: Stack, Queue, Priority-queue
        Associative: Set, Map, MultiSet, MultiMap
        Unordered Associative: Unordered-Set. Unordered Map, Unordered MultiSet, Unordered MultiMap

    Algorithms: Binary-search, find, reverser/rotate, Lower/Upped bount, min/max, sort/swap etc

    Videos: 1) https://www.youtube.com/watch?v=mOzPZ3hWFVQ
            2) https://www.youtube.com/playlist?list=PLN4aKSfpk8TQ6CqzMRDVUr-jEpObLiYdq




    Array:
             Functions-> .fill(0)                            //fills the entire array with 0
                         .at( )                              //accessing a specific position and getting its value
                         .empty()                            //will tell if array is empty of not
                         .front() or arr.at(0)               //will give the first element in the array
                         .back()  or arr.at(arr.size()-1)    //will give the end element in the array
                         .size()                             //tells the number of elements in an array
                
    Iterators(addresses)->  .begin()    //Starting point of the array the 0th element
                            .end()      //Address after the last element in the array which will be a null character
                            .rbegin()   //Ending point of the array 
                            .rend()     //Address before the beginning of the array which will be a null charcter





    Vector:

            Functions->     .fill(0)                            //fills the entire array with 0
                            .at( )                              //accessing a specific position and getting its value
                            .empty()                            //will  tell if array is empty of not
                            .clear()                            //empties the entire vector
                            .front() or arr.at(0)               //will give the first element in the array
                            .back()  or arr.at(arr.size()-1)    //will give the end element in the array
                            .size()                             //tells the number of elements in an array

    Iterators(addresses)->  .begin()    //starting point of the array the 0th element
                            .end()      //empty address after the last element in the array which will be a null character
                            .rbegin()   //ending point of the array 
                            .rend()     //empty address before the beginning of the array which will be a null charcter
    Set:
    Map:



    //no iterators here
    Stack:
    Queue:
    Priority Queue
*/