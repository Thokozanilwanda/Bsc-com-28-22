#include <iostream>

using namespace std;

int main() {
    int rows, cols;

    // Prompt and validate user input for rows
    do {
        cout << "Enter the number of rows (must be between 1 and 3): ";
        cin >> rows;
    } while (rows < 1 || rows > 3);

    // Prompt and validate user input for columns
    do {
        cout << "Enter the number of columns (must be between 1 and 3): ";
        cin >> cols;
    } while (cols < 1 || cols > 3);

    // Dynamically allocate memory for the 2D array
    double** arr = new double* [rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new double[cols];
    }

    // Input values for each element
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter value for row " << i + 1 << ", column " << j + 1 << ": ";
            cin >> arr[i][j];
        }
    }

    // Output the values of each element
    cout << "The array elements:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocate memory
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
