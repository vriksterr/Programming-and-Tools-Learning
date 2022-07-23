// reference to the video is: https://www.youtube.com/watch?v=1nfuYMXjZsA

#include<iostream>
#include<string>
using namespace std;

class Example{

    public:
        Example()
        {
            cout<<"Created Entity!"<<endl;
        }

        Example(int x)
        {
            cout<<"Created Entity with that "<< x << " !"<<endl<<endl;
        }
};

class Entity{
    private:
        string m_Name;
         Example m_Example;   // so this executes line 8 this gets executed like it was written in side Entity constructor
    public:
        Entity()
        {
            m_Name  =  string("unknown");
            m_Example = Example(8); // so this executes line 12
        }

};

//___________________________________________________________________________________________________________________________
// This method is more efficient as it was only 119 lines in Assembly where as the above one is 144 lines
class Example2{

    public:
        Example2()
        {
            cout<<"Created Entity!"<<endl;
        }

        Example2(int x)
        {
            cout<<"Created Entity with that "<< x << " !"<<endl;
        }
};

class Entity2{
    private:
        string m_Name;
         Example2 m_Example;
    public:
        Entity2() : m_Example{Example2(12)} // or you can type like m_Example{8} will be same
        {
            m_Name  =  string("unknown");
        }

};

int main (){
    // so basically we have created 2 Example which is inefficient 
    Entity  e0;
    // we have created 1 Example which is efficient
    Entity2  e1;
}