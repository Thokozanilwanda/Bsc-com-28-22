#include <iostream>
#include <limits> // For numeric_limits

using namespace std;

int main() {
    int numberOfElements;

    cout << "How many numbers would you like to type? ";

    // Input validation using a loop and `cin.fail()`
    while (!(cin >> numberOfElements) || numberOfElements <= 0) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a positive number: ";
    }

    int* dynamicArray = new int[numberOfElements];

    if (dynamicArray == nullptr) {
        cout << "Error: memory could not be allocated." << endl;
        return 1; // Indicate error
    }

    // Input for each element
    for (int i = 0; i < numberOfElements; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> dynamicArray[i];
    }

    cout << "You have entered: ";

    // Output all elements
    for (int j = 0; j < numberOfElements; j++) {
        cout << dynamicArray[j] << (j == numberOfElements - 1 ? "" : ", "); // No comma after last element
    }
    cout << endl;

    delete[] dynamicArray;
    dynamicArray = nullptr; // Set pointer to null after deletion for safety

    return 0;
}
