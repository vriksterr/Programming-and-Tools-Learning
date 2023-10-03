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
// C++ program to illustrate the 3 way comparison
// (spaceship) operator
#include <compare>
#include <iostream>
using namespace std;

int main()
{
	int x = 10;
	int y = 20;

	// saving the result of 3 way comparison operator
	auto res = x <=> y;

	// executing statements based on the above comparison
	if (res < 0)
		cout << "Less";
	else if (res > 0)
		cout << "Greater";
	else if (res == 0)
		cout << "Same";
	else
		cout << "Unordered";
	
	return 0;
}
