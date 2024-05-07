#include <iostream>

using namespace std;

int main() {
    int numbersArray[5] = {0}; // Initialize all elements to 0

    int* pPointer = numbersArray; // Point to the first element

    // Assign values using pointer arithmetic
    *pPointer = 10; // First element (numbersArray[0])
    pPointer++;
    *pPointer = 20; // Second element (numbersArray[1])
    pPointer++;
    *pPointer = 30; // Third element (numbersArray[2])

    // Assign value to the fourth element using pointer arithmetic
    pPointer = numbersArray + 3;
    *pPointer = 40; // Fourth element (numbersArray[3])

    // Assign value to the fifth element using pointer arithmetic
    *(numbersArray + 4) = 50; // Fifth element (numbersArray[4])

    // Output all elements
    for (int n = 0; n < 5; n++) {
        cout << numbersArray[n] << ", ";
    }
    cout << endl; // Add newline after the last comma

    return 0;
}
