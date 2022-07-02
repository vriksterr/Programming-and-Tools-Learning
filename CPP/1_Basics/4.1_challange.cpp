/*Write a C++ programe that follows:

Declare 2 empty vectors of integer named vector1 and vector2 respectively

Add 10 and 20 to vector1 dynamically using push_back
Display the elements in vector1 using the at() method as well as its size using the size() method

Add 100 & 200 to vector2 dynamically using push_back
Display the elements in vector2 using the at() method as well as its size using the size() method

Declare an empty 2D vector called vector_2D
Remember that a 2D vector is a vector of vector<int>

Add vector1 to vector_2D dynamically using push_back
Add vector2 to vector_2D dynamically using push_back

Display the elemtnts in vector_2D using the at() method

Change vector1.at(0) to 1000

Display the elements in vector_2D again using the at() method

Display the elements using vector1

What did you expect? Did you get what you expected? what do you think happened?*/

#include<iostream>
#include<vector>

int main()
{
    std::vector <int> vector1 ;
    std::vector <int> vector2 ;
    
    vector1.push_back(10);
    vector1.push_back(20);
    //vector1.at(0)=1000;  //read line 56 comments to understand this

    std::cout<<"Elements of vector 1: "<<vector1.at(0)<<" & "<<vector1.at(1)<<" and the size of the vector is: "<<vector1.size()<<std::endl;

    vector2.push_back(100);
    vector2.push_back(200);
    
    std::cout<<"Elements of vector2: "<<vector2.at(0)<<" & "<<vector2.at(1)<<" and the size of the vector is: "<<vector2.size()<<std::endl;

    std::vector<std::vector<int>> vector_2D;

    vector_2D.push_back(vector1);
    vector_2D.push_back(vector2);

    std::cout<<"Elements of Vector 2D is: "<<std::endl;
    std::cout<<vector_2D.at(0).at(0)<<","<<vector_2D.at(0).at(1)<<std::endl;
    std::cout<<vector_2D.at(1).at(0)<<","<<vector_2D.at(1).at(1)<<std::endl;
 
    //vector_2D.at(0).at(0)=1000; //correct way of doing it 
    vector1.at(0)=1000;     // as you can see in output the value didnt change in the vector_2D and the video says "when you add element to a vector you make a copy of what you are inserting" my understanding is that "look at line 48 and 49 you will see that we have inserted Vector 1 and Vector2 so when we added data of those vectors were already stored in vector_2D so even if we added vector1.at(0)=1000 the previous stored vectors were already stored in vector_2D so no changes occured. Now Look at line 37 when i use that line then the output is canged to 1000 coz the value got changed to 1000 before it got stored in vector_2D once its stored in vector_2D any changes made to vector1 and vector2 dont affect vector_2D and the data is copied and stored to vector_2D"
    std::cout<<"Updated elements of Vector 2D is: "<<std::endl;
    std::cout<<vector_2D.at(0).at(0)<<","<<vector_2D.at(0).at(1)<<std::endl;
    std::cout<<vector_2D.at(1).at(0)<<","<<vector_2D.at(1).at(1)<<std::endl;
    
}