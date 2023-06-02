#include <iostream>

using namespace std;

// function prototypes
double a_penny_doubled_everyday(int day, double penny = 0.01);

int main() {
    int day{18};
    double penny{0.01};

    cout << "Double penny " << penny << " for " << day << " days: " << a_penny_doubled_everyday(day) << endl;

    return 0;
}

double a_penny_doubled_everyday(int day, double penny) {
    if (day <= 1)
        return penny;

    return a_penny_doubled_everyday(day - 1, 2 * penny);
}
