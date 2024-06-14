#include<iostream>
using namespace std;



    int chair(){
        return 555;
    }








class Car{
    public:

    void carengine();
        
    Car chair() // here chair is a function but its return type is class idk look into this
    {
    cout<<"HHHHHH";
     return Car();
    }

};









// //void is the return type where car is the class name and carengine is the class member function
// void Car::carengine(){
// }
// //class constructor name 

// Car Car::chair(){
//     cout<<"HHHHHH";
//      return Car();
// }

int main()
{
    Car a;
    
    a.chair();

}



// talk about return types adn the storage that the compiler allots for the return value