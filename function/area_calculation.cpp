#include <iostream>
#include <iomanip>

using namespace std;

const double pi {3.14159};

double calc_area_circle(double radius) {
    return pi * (radius * radius);
}

double calc_volume_cylinder(double radius, double height) {
    return calc_area_circle(radius) * height;
}

void area_circle() {
    double radius {};
    cout << "\nEnter the radius of the circle: ";
    cin >> radius;
    
    cout << "The area of a circle with the radius " << radius << " is " << calc_area_circle(radius) << endl;
}

void volume_cylinder() {
    double radius {}, height {};

    cout << "\nEnter the radius of the cylinder: ";
    cin >> radius;
    
    cout << "\nEnter the height of the cylinder: ";
    cin >> height;

    cout << "The volume of the cylinder with radius " << radius << " and height " << height << " is " << calc_volume_cylinder(radius, height) << endl;
}

int main() {
    cout << fixed << setprecision(1);
    area_circle();
    volume_cylinder();

    return 0;
}