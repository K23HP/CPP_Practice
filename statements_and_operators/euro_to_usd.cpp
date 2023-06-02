#include <iostream>

using namespace std;

int main(){
    const double usd_per_eur {1.19};  // One euro is equal to 1.19 dollars (exchange rate)

    // Prompt user the exchange rate
    cout << "Welcome to EUR to USD Converter!" << endl;
    cout << "€1 = $" << usd_per_eur << endl;

    // Prompt user for entering euros
    cout << "Please enter euro ammount: €";

    double eur {0};
    cin >> eur;  // Store user input in the variable

    double usd {0};
    usd = eur * usd_per_eur;  // Calculate usd by multiplying eur and exchange rate

    cout << "€" << eur << " = " << "$" << usd << endl;

    return 0;
}