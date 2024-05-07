#include <iostream>
#include <limits> // For numeric_limits

using namespace std;

int main() {
    int userInput;

    // Prompt the user for an integer value between 5 and 10
    cout << "Please enter an integer value between 5 and 10: ";

    // Loop until a valid integer between 5 and 10 is entered
    while (true) {
        // Input validation using a loop and `cin.fail()`
        while (!(cin >> userInput) || userInput < 5 || userInput > 10) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter an integer value between 5 and 10: ";
        }

        // Valid input received, break out of the loop
        break;
    }

    // Output statement to inform the user that their input value has been accepted
    cout << "Your input value of " << userInput << " has been accepted." << endl;

    return 0;
}
