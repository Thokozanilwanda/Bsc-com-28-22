#include <iostream>

using namespace std;

int main() {
    int x = 3;

    // Use post-increment to assign the current value of x to y and then increment x
    int y = x++;

    cout << "x: " << x << endl; // Output: x: 4
    cout << "y: " << y << endl; // Output: y: 3

    return 0;
}
