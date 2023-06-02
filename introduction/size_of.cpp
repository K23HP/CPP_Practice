/***************************************
 * Author: K
 * Date: 2023, April 19
****************************************/

#include <iostream>
#include <climits>

using namespace std;

int main(){
    cout << "char = " << sizeof(char) << " bytes" << endl;
    cout << "int = " << sizeof(int) << " bytes" << endl;
    cout << "unsigned int = " << sizeof(unsigned int) << " bytes" << endl;
    cout << "float = " << sizeof(float) << " bytes" << endl;
    cout << "double = " << sizeof(double) << " bytes" << endl;
    cout << "long double = " << sizeof(long double) << " bytes" << endl;
    cout << "string = " << sizeof(string) << " bytes" << endl;
    cout << "short = " << sizeof(short) << " bytes" << endl;
    cout << "long = " << sizeof(long) << " bytes" << endl;
    cout << "longlong = " << sizeof(long long) << " bytes" << endl;
    return 0;
}
