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

int main(){
    switch (0){

    default: {
        int u;
        std::cout << "Statement5" << std::endl;
        std::cout << "Statement6" << std::endl;
        break;
    }

    case 0: {
        int y {5};
        std::cout << "x : " << y << std::endl;
        std::cout << "Statement1" << std::endl;
        std::cout << "Statement2" << std::endl;
        break;
    }

    case 1: {
        int z;
        std::cout << "y : " << z << std::endl;
        std::cout << "Statement3" << std::endl;
        std::cout << "Statement4" << std::endl;
        break;
    }
    

    }
    std::cout << "Moving on..." << std::endl;
   
    return 0;
}
