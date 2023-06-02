/**
 * @file delivery_cost_calculator.cpp
 * @author khant
 * @this program calculate the cost of the delivery.
 * Ask the user for package dimension in inches.
 * length, width, height should be integers
 * 
 * All dimension should be 10 inches or less or we can't ship it.
 * 
 * Base cost $2.50
 * If package is greater than 100 cubic inches there is 10% additional charge.
 * If package is greater than 500 cubic inches there is 25% additional charge.
 * 
 * @version 0.1
 * @date 2023-05-01
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include <iomanip>  // To set decimal points precisely

using namespace std;

int main() {
    // Set variables needed for calculation
    const double base_cost {2.50};
    const int max_dimension {10};

    int length {}, width {}, height {};

    const int tier1_threshold {100}, tier2_threshold {500};

    const double tier1_charge {0.10}, tier2_charge {0.25};

    // Get user input
    cout << "Welcome to the delivery service" << endl;
    cout << "Enter your package size seperated by spaces (i.e. length width height): (e.g. 1 2 3)\n>>> ";
    cin >> length >> width >> height;
    
    // Check lenght, width and height measurement
    if (length > max_dimension || width > max_dimension || height > max_dimension) {
        cout << "Sorry, your package is oversize. It cannot be delivered!" << endl;
    } 
    else {
        double delivery_cost {};
        int package_volume = length * width * height;

        // Check volume of package
        if (package_volume > 0) {
            delivery_cost = base_cost;
            double additional_charge {0};

            cout << "The volume of your package is: " << length << " x " << width << " x " << height << 
                " = " << package_volume << endl;
            
            // Calculate cost of delivery based on package size
            if (package_volume > tier2_threshold){
                additional_charge = base_cost * tier2_charge;
                delivery_cost += additional_charge;

                cout << "Your package volume " << package_volume << " is larger than " << tier2_threshold << endl;
            } 
            else if (package_volume > tier1_threshold) {
                additional_charge = base_cost * tier1_charge;
                delivery_cost += additional_charge;

                cout << "Your package volume " << package_volume << " is larger than " << tier1_threshold << endl;
            }

            cout << fixed << setprecision(2); // Set decimal to 2 to print dollars nicely
            cout << "Additional charge: $" << additional_charge << endl;
            cout << "Total cost for your delivery is: $" << delivery_cost << endl;
        }
        else {
            cout << "Your package size is not normal!" << endl;
        }
    }

    return 0;
}