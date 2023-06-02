#include <iostream>
#include <cmath>

using namespace std;

int find_area(int side_length);
double find_area(double length, double width);

int main() {
    int square_area {find_area(2)};
    double rectangle_area {find_area(4.5, 2.3)};

    cout << "The area of the square is " << square_area << "\n" << "The area of the rectangle is " << rectangle_area << endl;

    return 0;
}

// Area of the square
int find_area(int side_length) {
    return pow(side_length, 2);
}

// Area of the rectangle
double find_area(double length, double width) {
    return length * width;
}
