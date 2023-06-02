#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Formal parameters = parameters defined in the function declaration
// Actual parameters = actual values passed into the function during function calls or arguments

double fahrenheit_to_celsius(double fahrenheit);
double fahrenheit_to_kelvin(double fahrenheit);

int main () {
    cout << fixed << setprecision(1);

    double fahrenheit {32};
    double celsius {fahrenheit_to_celsius(fahrenheit)};
    double kelvin {fahrenheit_to_kelvin(fahrenheit)};

    cout << fahrenheit << "°F" << " = " << celsius << "°C" << " = " << kelvin << "°K" << endl;

    return 0;
}

double fahrenheit_to_celsius(double fahrenheit) {
    return round((5.0 / 9.0) * (fahrenheit - 32));
}

double fahrenheit_to_kelvin(double fahrenheit) {
    return round(((5.0 / 9.0) * (fahrenheit - 32)) + 273);
}
