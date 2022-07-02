// ARRAY & Vectors 
#include <iostream>
#include <vector>  // we have to use vector liberary in order to use vecotrs below

int main ()

    {
        //______________________________________
        //____________ARRAY_____________________
        //______________________________________
        
        /*
          Array is compound data type or data structure
          there is 1 dimention array and multi dimentional array(2d,3d,4d... can go on based on your need)
          Collection of elements
          All elements are of the same type
          each element can be accessed directly

          Array are fixed in size wont increase of shrink data in an array can be integer, double, float, character
          Frist element in an array is 0 and last element is size-1

          Array is a memory address when we type just arr in the program we get starting address of the arr array
          and when we type arr[0] we are getting the value at starting address of array.

          - An array is considered to be the same thing as a pointer to the first item in the array.
          - An array is a pointer, and you can store that pointer into any pointer variable of the correct type. 
            For example,

                  int  A[10];
                  int* p = A;
                  p[0] = 0;
        */

    // Element_Type  array_name  [number of elements]  {init list}
       int test_scores [5] {100,95,99,87,88};
       int test_scores2 [5] {100,95};  // in this case the first 2 array will be 100 and 95 remaining will be 0
       int test_scores3 [] {100,95,99,87,88,44};  // in this case the array size is automatically calculated
       int test_scores4 [5] ; // now in this case the values inside the array it will be junk (random values) cant leave [] empty in this case to put all values 0 put empty {}
       int test_scores5 [] {} ;  // will output random junk
       char vowels [] {'a','e','i','o','u'};
       double temperature [] {90.1,91.2,92.3};

       //Storing values in an array

       std::cin>>test_scores[0];
       std::cin>>test_scores[1];
        //or
       test_scores[0]=90;

       //accessing the values of an array

       std::cout<<test_scores[0]<<std::endl;
       std::cout<<test_scores[6]<<std::endl; // here you can see i gave an array address of 6 and there is nothing at 6 so i will get a random rumber at output
       std::cout<<vowels[4]<<std::endl;      // if a character array is out of bound on linux the output was empty and in tutorial(windows) the app crashed
       std::cout<<test_scores5[0]<<std::endl;
       std::cout<<test_scores5<<std::endl;   // if i dont put [value] output in my case it was : 0x7ffc609cc0dc which seems like memory address when the values

       //___________ 2D ARRAY_______________

       int movie_rating [3][4]

       {
           {0, 4, 3, 5},
           {2, 3, 3, 5},
           {1, 4, 4, 5}
       };

       //_____________________________________
       //_____________VECTORS_________________
       //_____________________________________
       
    /* 
    We need to use <vector> library in order to use vectors and vector is part of std liberary 
    */

    std::vector <char> new_vowels (5); // this command we have stated the size of vector to be 5 and all the values of 5 will be set to 0 by default we only set the size when we really need a limit else if we leave it empty in vectors it will show this error "warning: empty parentheses were disambiguated as a function declaration [-Wvexing-parse]""
    std::vector <int> showcase {}; // you dont have to use empty {} function declaration if you are going to keep it empty 
    std::vector <int> marks (10);
    std::vector <double> new_temperature (365, 80.0); // the first value 365 is the size of the vector and the second value 80.0 is the value which will be initialized to all the 365 address
    
    std::vector <char> letters {'a','e','i','o','u'}; // here we have entered the values straight so we dont have to add the size of the vector as it will do it automatically
    std::vector <int> marks2 {100,98,89,85,93}; // and cant use empty () if there are values in {}

    std::cin>>marks.at(5);  // adding values at 5th position in the vector
    marks2.push_back(80);   // will add 80 at the end of the vector
    marks2.push_back(test_scores[0]);  //we can put other objects inside ()
    
    std::cout<<marks[5]<<std::endl;    // array way of accessing data but array way dont do a bounce checking
    std::cout<<marks.at(5)<<std::endl; // vector way of accessing data and if the value inside () is out of bound the error message will be showed  but not in the case or array method
    std::cout<<marks2.at(6)<<std::endl;

    std::cout<<"Size of the vecotr is: "<<marks2.size()<<std::endl; // will tell the size of vectors

    //__________2D Vector___________

    std::vector<std::vector<int>> imdb_rating
    {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    
    std::cout<<imdb_rating[0][1]<<std::endl; // array way of accessing data without bounce checking
    std::cout<<imdb_rating.at(1).at(1)<<std::endl; // vector way of accessing data with bouce checking
    
    //entering values at a 2D vector
    int new_vector_element{0};
    std::cin>>new_vector_element;
    //or
    std::cin>>imdb_rating.at(2).at(2);
    imdb_rating.at(2).at(2)=new_vector_element;

    }