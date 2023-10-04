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
// #include <iostream>
// using namespace std;

// namespace custom {
//     int y = 69;
    
//     void custom_namespace_func() {
//         cout << "Hello";  // Output the message directly
//     }
// }

// int main() {
//     custom::custom_namespace_func();  // Call the function to print the message
//     cout << endl;  // Print a newline after the message
//     return 0;  // Return 0 to indicate successful program execution
// }

#include <iostream>
using namespace std;

namespace custom{
      int y = 69;
      void custom_namespace_func(){cout<<"HEllo";}
}
int main(){
      cout << custom::custom_namespace_func() <<endl;
}