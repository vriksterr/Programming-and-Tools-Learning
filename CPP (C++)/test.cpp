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

        int car(){
        int x{10};
        int y{20};
        return x,y;
        }

        int bus(){
        int x{10};
        int y{20};
        return x+5,y=x,y;
        }

        int main(){
        cout<<car()<<endl;    //output will be 20
        cout<<bus()<<endl;    //output will be 20
        }
