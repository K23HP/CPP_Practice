/*
Nested Loops - Sum of the Product of all Pairs of Vector Elements
    Given a vector of integers named vec  that is provided for you, 
find the sum of the product of all pairs of vector elements. You 
should declare an integer variable named result and store the final 
product in this variable.

    For example, given the vector  vec  to be {1, 2 , 3} , the possible 
pairs are (1,2), (1,3), and (2,3). So the result would be (1*2) + (1*3) + (2*3)  
which is 11.

Another example:
Given the vector vec  to be {2, 4, 6, 8} , the possible pairs are 
(2,4), (2,6), (2,8), (4,6), (4,8), and (6,8).
So the result would be (2*4) + (2*6) + (2*8) + (4*6) + (4*8) + (6*8) which is 140 .
If the vector is empty or has only 1  element then the result  should be 0 .
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec1 {1, 2, 3};
    vector<int> vec2 {2, 4, 6, 8};
    vector<int> vec3 {1, 3, 5, 7, 9};

    vector<int> vec {vec3};
    int vec_size = vec.size();  // Size of vector
    int product {0};
    int result {0};

    cout << "Given a vector of integers: " << endl;

    for (auto val: vec) {
        cout << val << " ";
    }

    cout << endl;

    cout << endl;

    // The outer loop to keep track of front number
    for (int i {0}; i < vec_size - 1; ++i) {  // the last element of vector shouldn't be repeated in multiplication
        for (int j {i + 1}; j < vec_size; ++j) {  // The number after the first one
            product = vec[i] * vec[j];
            result += product;

            string sign = ((i < vec_size - 2)) ? " + " : " ";
            cout << '(' << vec[i] << " * " << vec[j] << ')' << sign;
        }
    }

    cout << endl;

    cout << endl; 

    cout << "The sum of the product = " << result << endl;

    return 0;
}
