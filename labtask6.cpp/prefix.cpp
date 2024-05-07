#include <iostream>

using namespace std;

int main() {
    int x = 3;

    // Use pre-increment to assign incremented value to y
    int y = ++x;

    cout << "x: " << x << endl; // Output: x: 4
    cout << "y: " << y << endl; // Output: y: 4

    return 0;
}
