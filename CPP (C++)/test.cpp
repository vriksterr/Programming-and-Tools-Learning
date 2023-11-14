/*   

    ***************************
    *
    ***************************

     __________________________
    |
    |__________________________

      /_________________________
     /
    /_________________________

    
    •
    •
    •

*/
// what's the value of j

#include<iostream>
using namespace std;

int main()
{
  int i=4;
  int j=(i++)+(++i);          //this becomes 4+6
  cout<<"Value is :"<<j<<endl;
  return 0;
}