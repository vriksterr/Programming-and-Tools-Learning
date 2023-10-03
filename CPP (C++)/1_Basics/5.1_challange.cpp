/* Section 8 Challange

For this program i will be using US dollars and cents.

Write a program that asks the user to enter the following:
An integer representing the number of cents

You may assume that the number of cents entered is greater than or equal to zero


The program should then display how to provide the change to the user.

In the US:

    1 dollar is 100 cents
    1 quarts is 25 cents
    1 dime is 10 cents
    1 nickel is 5 cents
    1 penny is 1 cent

Here is a sample run:

Enter an ammount in cents: 92

You can provide this change as follows:

Dollars: 0
Quarters: 3
Dimes: 1
nickels: 1
pennies: 2

Feel free to use your own currency system.
Also think of how you might solve the problem using the modulo operator.

Have fun and test you program!!

*/

#include <iostream>
using namespace std;

int main()
{
    const int dollar_value{100},quarter_value{25},dime_value{10},nickle_value{5};
    int change_amount{};

    cout<<"Enter an amount in cents: ";
    cin>> change_amount;

    int balance{},dollars{},quarters{},dimes{},nickels{},pennies{};

    //solution 1- not using the modulo % operator

    dollars = change_amount/dollar_value;
    balance = change_amount-(dollars*dollar_value);

    quarters = balance/quarter_value;
    balance -= quarters*quarter_value;

    dimes = balance/dime_value;
    balance -= dimes*dime_value;

    nickels = balance/nickle_value;
    balance -= nickle_value;

    pennies = balance;

    //Solution 2- using the modulo % operator

    balance=dollars=quarters=dimes=nickels=pennies=0;  //reset everything to zero

    dollars = change_amount/dollar_value;
    balance = change_amount%dollar_value;

    quarters = balance/quarter_value;
    balance %= quarter_value;

    dimes = balance/dime_value;
    balance %= dime_value;

    nickels = balance/nickle_value;
    balance %= nickle_value;

    pennies = balance;

    cout<<"Dollars: "<<dollars<<endl<<"Quarters: "<<quarters<<endl<<"Dimes: "<<dimes<<endl<<"Nickels: "<<nickels<<endl<<"Pennies: "<<pennies<<endl;

}