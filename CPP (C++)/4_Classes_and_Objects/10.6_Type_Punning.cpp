/*

    ****************
    * Type Punning *
    ****************
    Its a way for make a varialbe look to be something else which it isnt we can also say accessing data 
    through a pointer of unrelated type.

    watch: https://www.youtube.com/watch?v=8egZ_5GA9Bc
           https://www.youtube.com/watch?v=HClSfuT2bFA
           https://www.youtube.com/watch?v=pWZS1MtxI-A
           https://imgur.com/a/B6rklwu

*/
#include <iostream>
using namespace std;
//here we are using struct whose members are public by defauly where as in class type punning wont work
struct Entity{
    
    int x, y;

    //function to access and change x, y varialbe the Correct way coz we are not copying memory we are just linking away
    int *get_position(){
        return &x;
    }
};

int main(){
    //first example
    int a = 50;
    double value =  double (*(&a)) ; //or (double*)&a <-is the used style coz we are converting &a to a int pointer
    value = 5;
    cout<<"First example value is "<<value<<endl; 

    
    //second example        USE THIS METHOD but USE C++ style not c style 
    Entity e = {5, 8};
    int *position1 = reinterpret_cast<int*>(&e); // BEST and FASTEST STYLE
    cout<<"Position1 of first element is "<<position1[0] <<" and second is "<<position1[1] << endl;

    //the above and below both are same implementation but the above has 55 lines in asm and below one has 57 lines in asm, so above is faster
    //below one is the same person way of writing
    int &car(e.x);
    int *position2 = &car;
    cout<<"Position2 of first element is "<<position2[0] <<" and second is "<<position2[1] << endl;

    
    //Here is the correct way of doing things but produces 67 lines of asm so fastest is position 1 way so use that if you want fastest way to access x which is the first element of class Entity

    int *position3 = e.get_position();
    position3[0]=2;
    position3[1]=3;
    cout<<"Position3 of first element is "<<position3[0] <<" and second is "<<position3[1] << endl;

    //to see if it has changed for position 2 as well
    cout<<"Position3 of first element is "<<position2[0] <<" and second is "<<position2[1] << endl;
}
//Another small Type punning example that just changes the type nothing much like the above example where we were trying to access the first variable of struct via type punning
// #include <iostream>
// using namespace std;

// void bar(int *a, float *b){
//     *a = 1;
//     *b = 2.f;
// }

// int main(){
//     double c{11.22};
//     cout << c<<endl;
//     double value = *(reinterpret_cast<int*>(&c));

//     cout << value <<endl;
// }