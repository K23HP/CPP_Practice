#include <iostream>

using namespace std;

int main(){
    int a {100};  // This is initialization (Not an assignment)
    int b {200};  // This is initialization (Not an assignment)

    cout << "a is " << a << endl;
    cout << "b is " << b << endl;
    
    cout << endl;

    a = b;
    cout << "After assigning a with the value of b, a is now " << a << "." << endl; 

    return 0;
}