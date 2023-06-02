#include <iostream>

using namespace std;

void local_demo(int x);
void global_demo();
void static_demo();

int main() {
    int num4 {300};
    int num5 {400};

    cout << "Num4 in main " << num4 << endl;
    cout << "Num5 in main " << num5 << endl;

    cout << endl;

    {
        num4 = 400;
        int num5 {600};

        cout << "Num4 in block " << num4 << endl;
        cout << "Num5 in block " << num5 << endl;

        cout << endl;
    }

    cout << "Num4 is changed in main " << num4 << endl;
    cout << "Num5 isn't changed in main " << num5 << endl;

    cout << endl;

    local_demo(6);

    cout << endl;

    local_demo(6);

    cout << endl;

    global_demo();

    cout << endl;

    global_demo();

    cout << endl;

    static_demo();

    cout << endl;

    static_demo();

    return 0;
}

void local_demo(int x) {
    int num {12};

    cout << "Local num is " << num << " in local demo start." << endl;

    num = x;
    cout << "Local num is " << num << " in local demo end." << endl;
    // num in main is not in local scope. So it can't be used in this scope.
}

int num1 {100};

void global_demo() {
    cout << "Global num1 is " << num1 << " in global demo start." << endl;
    
    num1 *= 2;

    cout << "Global num1 is " << num1 << " in global demo end." << endl;
}

void static_demo() {
    static int num2 {500};

    cout << "Static num2 is " << num2 << " in static demo start." << endl;

    num2 *= 2;

    cout << "Static num2 is " << num2 << " in static demo end." << endl;
}
