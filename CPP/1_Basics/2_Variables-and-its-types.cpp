/*
Types of variable 1st Local 2nd Global 3rd Constant 4th Undefined by not using {} and value inside it

Also all different types of variables types such as INT,Float,Boolean,CHAR

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


        const char character[]{"hi"};     // you can put [] = {} but putting = is not required anymore, the [] hold the size of char 
        char character2[]{'a','b','c'};
        char character3{'j'};
        std::cout<<"Character: "<<character<<" & "<<character2<<" & "<<character3<<std::endl;

        //__________________________________________
        //          Overflow Example
        //__________________________________________
        short value_no_1{30000};
        short value_no_2{1000};
        //short product{value_no_1*value_no_2}; //Overflow as the short cannot store the value and will throw -Wnarrowing error when compiling

    return 0;

    }