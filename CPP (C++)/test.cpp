/*   

    ***************************
    *
    ***************************

     __________________________
    |
    |__________________________

      _________________________
     /
    /_________________________

    //_________________________
    //
    //_________________________
    
    •
    •
    •

*/
 #include <iostream>
using namespace std;
int main(){

  switch (2){

    int a =10;
    cout<<"welcome to switch case!!";

    case 1: 
        constexpr int b=20;
        cout<<"1"<<endl;
        break;

    case 2: cout<<"2"<<endl; 
            goto car;
            int c =30;

    case 3: 
        cout<<"3"<<endl;
          
    default:
        cout<<"bye bye!";

  }
  car:
    cout<<"_lul_";
return 0;
}

