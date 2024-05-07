#include <iostream>

using namespace std;

int main() {
    // 1. Declare an integer variable
    int integerVar = 5;

    // 2. Declare a pointer to an integer (null initialization for safety)
    int* pPointer = nullptr;

    // 3. Assign the address of integerVar to the pointer
    pPointer = &integerVar;

    // 4. Output the value of integerVar
    cout << "integerVar: " << integerVar << endl;

    // 5. Output the address of integerVar
    cout << "Address of integerVar: " << &integerVar << endl;

    // 6. Output the value stored at the address pointed to by pPointer
    cout << "Value pointed to by pPointer: " << *pPointer << endl;  // Use * to dereference

    // 7. Output the address stored in pPointer (address of integerVar)
    cout << "pPointer: " << pPointer << endl;

    return 0;
}
