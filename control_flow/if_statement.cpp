/********************************************************
 * Author: Khant
 * Date: April 30, 2023
 * About this code: Selection and iteration
*/

#include <iostream>

using namespace std;

int main(){
    int num {0};
    const int min {10};
    const int max {100};
    int diff {0};

    cout << "Enter an integer between " << min << " and " << max << ": ";
    cin >> num;

    if (num >= min){
        cout << "==================if statement 1 ==================" << endl;
        cout << num << " is greater than or equal" << min << endl;

        diff = num - min;
        cout << num << " is " << diff << " greater than " << min << endl;
    }

    if (num <= max){
        cout << "==================if statement 2 ==================" << endl;
        cout << num << " is smaller than or equal to " << max << endl;

        diff = max - num;
        cout << num << " is " << diff << " smaller than " << max << endl;
    }

    if (num >= min && num <= max){
        cout << "Both statement 1 and 2 should display!" << endl;
    }

    if (num == min || num == max){
        cout << num << " is right on the boundary!" << endl;
    }

    cout << endl;
    return 0;
}
