#include <iostream>

using namespace std;

int main() {
    // Declare a null pointer initially (safe practice)
    int* pPointer = nullptr;

    // Array declaration and initialization
    int numbersArray[3] = {10, 20, 30};

    // Assign the address of the first element to the pointer
    pPointer = numbersArray;

    // Output the address of the first element
    cout << "Address at pPointer: " << pPointer << endl;
    cout << "Address of numbersArray[0]: " << numbersArray << endl;  // Array name decays to its address

    // Output the value of the first element using the pointer and indirection
    cout << "Value at pPointer: " << *pPointer << endl;  // Dereference to access value

    // Output the value of the second element using pointer arithmetic
    cout << "Value at pPointer + 1: " << *(pPointer + 1) << endl;  // Safer than pre-increment

    // Re-assign the address of the first element to the pointer (not strictly necessary)
    pPointer = numbersArray;

    // Output the value of the first element using post-increment (indirection after increment)
    cout << "Value at pPointer++: " << *pPointer++ << endl;  // Dereference before increment

    return 0;
}
