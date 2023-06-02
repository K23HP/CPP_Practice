/*********************************************************************
 * Author: Khant
 * Date: 2023, April 25
 * About this code: Let the user enter the number of cents,
 * the program will provide the change information which is equal to
 * the cents in return.
 * 
 * In US:
 * 1 dollar = 100 cents
 * 1 quarter = 25 cents
 * 1 dime = 10 cents
 * 1 nickel = 5 cents, and
 * 1 penny = 1 cents
 * 
 * Hint: Think of how you might solve using modulo operator
**********************************************************************/

#include <iostream>

using namespace std;

int main(){

    cout << "Enter the cents: ";

    int cents {};
    cin >> cents;  // Store the cents in a variable

    // Initialize variables for change information
    int dollars {}, quarters {}, dimes {}, nickels {}, pennies {};
    int remaining {0};

    // Calculation
    dollars = cents / 100;  // 1 dollar == 100 cents (So, divide cents with 100)
    remaining = cents % 100;  // The remaining cents
    
    quarters = remaining / 25;  // 1 quarter == 25 cents (divide the remaining cents with 25)
    remaining %= 25;  // Remaining cents after quarters

    dimes = remaining / 10;  // 1 dime == 10 cents (divide the remaining cents with 10)
    remaining %= 10;  // Remaining cents after dimes

    nickels = remaining / 5;  // 1 nickel == 5 cents (divide the remaining cents with 5)
    remaining %= 5; // Remaining cents after nickels

    pennies = remaining / 1; // 1 penny == 1 cents (divide the remaining cents with 1)



    cout << "Here is how to provide the change: " << endl;
    cout << endl;
    cout << "dollars : " << dollars << endl;
    cout << "quarters: " << quarters << endl;
    cout << "dimes   : " << dimes << endl;
    cout << "nickels : " << nickels << endl;
    cout << "pennies : " << pennies << endl;
    cout << endl;

    return 0;
}
