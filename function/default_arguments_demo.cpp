#include <iostream>
#include <string>

using namespace std;

// Default argument values are added in function prototypes
void greet(string name, string prefix = "Mr.", string suffix = "");

void greet(string name, string prefix, string suffix) {
    cout << "Hello " << prefix + " " + name + " " + suffix << endl;
}

int main() {
    greet("Khant", "Professor", "Ph.D");

    return 0;
}