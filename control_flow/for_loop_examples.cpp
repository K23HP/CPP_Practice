#include <iostream>
#include <vector>

using namespace std;

int main(){
    // Print multiplication table from 2 to 12
    for(int x {1}; x < 13; ++x){
        for (int y {1}; y < 13; ++y) {
            cout << x << " x " << y << " = " << (x * y) << endl;
            cout << ((y == 12) ? "\n" : "");
        }
    }

    return 0;
}