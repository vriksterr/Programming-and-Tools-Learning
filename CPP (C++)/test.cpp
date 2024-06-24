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
        int car {99};
        int choice;
        cin>>choice;

        switch (choice){
            
            case 0 :
                int y;  //crosses initialization error
                std::cout << "y : " << y << std::endl;
                break;
                
            case 1 : 
                int z;
                std::cout << "z : " << z << std::endl;
                break;
            
            default:
                int u{10000};
                std::cout << "u : " << u << std::endl;
                break;
        }
        return 0;
    }
