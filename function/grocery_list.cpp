#include <iostream>

using namespace std;

void print_grocery_list(int apples = 3, int oranges = 7, int mangos = 13);

int main() {
    print_grocery_list();
    print_grocery_list(5);
    print_grocery_list(7, 11);

    return 0;
}

void print_grocery_list(int apples, int oranges, int mangos) {
    cout << "apples: " << apples << "\n" << "mangoes: " << mangos << "\n" << "oranges: " << oranges << endl;
}
