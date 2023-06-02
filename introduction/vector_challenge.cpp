/**************************************************************
 * Author: K
 * Date: 2023, April 21
 * About this code: Vector challenge
***************************************************************/

#include <iostream>
#include <vector>

using namespace std;

int main(){
    // Create two empty vectors of integers
    vector <int> vector1 {};
    vector <int> vector2 {};

    // Add 10 and 20 to vector1 dynamically using push_back() method
    vector1.push_back(10);
    vector1.push_back(20);

    /* Display the elements in the vector1 using at() method as well as
    the size of the vector using size() method.
    */ 
    cout << "Vector 1: \n";
    cout << vector1.at(0) << " " << vector1.at(1) << endl;
    cout << "There are " << vector1.size() << " elements in vector 1." << endl;

    cout << endl;

    // Add 100 and 200 to vector2 dynamically using push_back() method
    vector2.push_back(100);
    vector2.push_back(200);

    /* Display the elements in the vector2 using at() method as well as
    the size of the vector using size() method.
    */
    cout << "Vector 2: \n";
    cout << vector2.at(0) << " " << vector2.at(1) << endl;
    cout << "There are " << vector2.size() << " elements in vector 2." << endl;

    cout << endl;

    // Declare an empty 2D vector called vector_2d
    vector <vector <int>> vector_2d {};

    // Add vector1 and vector2 to vector_2d dynamically using push_back()
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    // Display the elements in vector_2d using at() method
    cout << "Vector 2D: \n";
    cout << vector_2d.at(0).at(0) << "    " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << "    " << vector_2d.at(1).at(1) << endl;
    cout << "There are " << vector_2d.size() << " elements in vector 2." << endl;

    cout << endl;

    // Change the vector1.at(0) to 1000
    vector1.at(0) = 1000;

    /* Display the elements in the vector1 using at() method as well as
    the size of the vector using size() method.
    */ 
    cout << "Vector 1: \n";
    cout << vector1.at(0) << " " << vector1.at(1) << endl;
    cout << "There are " << vector1.size() << " elements in vector 1." << endl;

    cout << endl;

    // Display the elements in vector_2d using at() method
    cout << "Vector 2D: \n";
    cout << vector_2d.at(0).at(0) << "    " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << "    " << vector_2d.at(1).at(1) << endl;
    cout << "There are " << vector_2d.size() << " vectors in vector 2D." << endl;

    cout << "Why first element of vector 2D isn't changed? Have you tought of that?" << endl;

    return 0;
}
