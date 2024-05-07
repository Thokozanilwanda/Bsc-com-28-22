#include <iostream>
#include <string>

using namespace std;

int main() {
    int* ptrInt = nullptr; // Initialize integer pointer to null
    string* ptrString = nullptr; // Initialize string pointer to null

    // Allocate memory for integer
    ptrInt = new int;
    if (ptrInt == nullptr) {
        cout << "Error: Memory allocation failed for integer." << endl;
        return 1; // Indicate error
    }

    // Allocate memory for string
    ptrString = new string;
    if (ptrString == nullptr) {
        cout << "Error: Memory allocation failed for string." << endl;
        delete ptrInt; // Deallocate integer memory if string allocation fails
        return 1; // Indicate error
    }

    // Prompt and assign value to the integer
    cout << "Enter an integer value: ";
    cin >> *ptrInt;

    // Prompt and assign value to the string (use getline to handle spaces)
    cout << "Enter a string value: ";
    getline(cin, *ptrString); // Read entire line including spaces

    // Output the values
    cout << "Integer value: " << *ptrInt << endl;
    cout << "String value: " << *ptrString << endl;

    // Deallocate memory
    delete ptrInt;
    delete ptrString;

    return 0;
}
