#include <iostream>

using namespace std;

int main() {
    int firstValue;
    int secondValue;

    int* pPointer = nullptr;

    // Assign pointer to address of firstValue (safe initialization)
    pPointer = &firstValue;

    // Modify the value at the address pointed to by pPointer (indirection)
    *pPointer = 10;

    // Assign pointer to address of secondValue
    pPointer = &secondValue;

    // Modify the value at the address pointed to by pPointer (indirection)
    *pPointer = 20;

    cout << "firstValue is " << firstValue << endl;
    cout << "secondValue is " << secondValue << endl;

    return 0;
}
