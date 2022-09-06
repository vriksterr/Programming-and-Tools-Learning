/*
    *********************
    * Types of variable *
    *********************
    - 1st Local 2nd Global 3rd Constant 4th Undefined by not using {} and value inside it

    Also all different types of variables types such as INT,Float,Boolean,CHAR,double,etc

    *****************************
    * Declaration of a Variable *
    *****************************
    - Variables is the name given to a location in the memory location to the variable that is 
      in programming
    
    **************************
    * Variables names in C++ *
    **************************

    - Variables names can contain $, letters, digits, _(underscore)
    - Names are case sensitive (myVar and myvar are different variables)
    - Names cannot contain whitespaces or special characters like !, #, %.
    - Reserved words (like C++ keywords, such as int) cannot be used as names

    acceptable variable names:
        Grade 
        GradeOnTest
        Grade_On_Test
        _my_var
        myvar2
        my2var
        myVar
        $
        $myvar
        $xxx$

    unacceptable variable names:
        Grade(Test)
        GradeTest#1
        3rd_Test_Grade
        2myvar
        my-var
        my var
        ,myvar
        !myvar
        my*var
        my,var
        and all the reserved c++ names

    References: https://www.geeksforgeeks.org/naming-convention-in-c/
*/


#include<iostream>
#include<cstdint> // i didnt seem to need it for declaring a different bit size integer but it was used in a https://www.quora.com/How-do-you-declare-a-64-bit-integer-in-C-1 we dont need to use this as this is a part of namespace std liberary https://en.cppreference.com/w/cpp/header/cstdint
                 // also read https://stackoverflow.com/questions/50505212/how-am-i-able-to-use-int32-t-without-without-using-std where you will see why we to add this coz it might not working with other compilers

int const my_room_area{200}; // Global Variable which is also constant, these constant values cannot be changed by the user

int main()
    {   //__________________________________________
        //            Integer Types
        //__________________________________________

        //INT
        std::cout<<"Enter Room Length: ";
        int room_lenght{0};     //Local Variable
        std::cin>>room_lenght;

        std::cout<<"Enter Room Breadth: ";
        int room_breadth{0};    //Local Variable
        std::cin>>room_breadth;


        std::cout<<"Area of the room is: "<< room_lenght*room_breadth << std::endl;

        int my_room_area{6969};     // Overshadows the Global Variable if written locally
        std::cout<<"But my Room Area is :"<<my_room_area<<std::endl;

        //unsigned short int
        unsigned short int exam_score{55};
        //long
        long people_in_florida{20610000};
        long people_on_earth{7'600'000'000};
        long people_on_earth_C_Style = 7'600'000'000; // this is old C style and will give buffer overflow when you run it so ditch this and use new C++ style where we use {}
        //long long
        long long distance_to_alpha_centuari{9'461'000'000'000};

        //__________________________________________
        //   Different bit size variable 8,16,32,64
        //__________________________________________

        std::int64_t my_64_bit_int = 0x1122334455667788; 
        std::uint64_t my_other_64_bit_int = 0x2233445566778899;

        std::int8_t my_32_bit_int {32}; 
        std::uint32_t my_other_32_bit_int ; 
        // and so and so forth for 16 and 8 bit and 4 bit


        //__________________________________________
        //          Floating Point Types
        //__________________________________________

        float car_payment{401.23};
        double pi{3.14159};
        long double large_amount{2.7e120};

        //__________________________________________
        //              Boolean Type
        //__________________________________________

        bool game_over{false};


        //__________________________________________
        //               Char Types
        //__________________________________________


        const char character[]{"hi"};     // you can put [] = {} but putting = is not required anymore, the [] hold the size of char, " " puts a null character at the end of it if we write it this way
        char character2[]{'a','b','c'};
        char character3{'j'};
        char a[100]{'a','b','\0'};   //there should be a null character at the end to avoid garbage value to be printed
        std::cout<<"Character: "<<character<<" & "<<character2<<" & "<<character3<<std::endl;

        //__________________________________________
        //          Overflow Example
        //__________________________________________
        short value_no_1{30000};
        short value_no_2{1000};
        //short product{value_no_1*value_no_2}; //Overflow as the short cannot store the value and will throw -Wnarrowing error when compiling

    return 0;

    }