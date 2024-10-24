#include <iostream>
#include <limits>

using namespace std;

// Function declaration
int** createDimensions(int row, int col);
void fill2DArray(int** array, int row, int col);
int* findMinVal(int** array, int row, int col);
void displayMinArray(int* result, int size);
void del2DArray(int** array, int row);

int main() {
    int row, col;

    // Dimensions for array
    while (true) {
        cout << "Enter the number of rows (positive integer): ";
        cin >> row;
        if (cin.fail()) { // Check if its a int data type, if not - clear input and input again
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a positive integer." << endl;
        } else if (row <= 0) { // Is it a natural number - clear input and input again
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a positive integer." << endl;
        } else {
            break;
        }
    }

    while (true) {
        cin >> col;
        if (cin.fail()) { // Check if its a int data type, if not - clear input and input again
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a positive integer." << endl;
        } else if (col <= 0) { // Is it a natural number - clear input and input again
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a positive integer." << endl;
        } else {
            break;
        }
    }

    int** array = createDimensions(row, col);

    fill2DArray(array, row, col);

    int* resArray = findMinVal(array, row, col);

    displayMinArray(resArray, col);

    del2DArray(array, row);

    delete[] resArray;

    return 0;

}

// Function definitions
// Creating a dynamic array, allocate memory for a 2D array
int** createDimensions(int row, int col) {
    int** array = new int*[row]; // Allocate memory for rows
    for (int i = 0; i < row; i++) {
        array[i] = new int[col]; // Allocate memory for columns in each row
    }
    return array;
}

// Filling the 2D array from user input
void fill2DArray(int** array, int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "Enter element for row " << (i + 1) << ", column " << (j + 1) << ": ";
            while (!(cin >> array[i][j])) { 
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input. Please enter an integer." << endl;
            }
        }
    }
}

// Find the minimum value in each column and store in an array
int* findMinVal(int** array, int row, int col) {
    int* result = new int[col];
    for (int j = 0; j < col; j++) {
        result[j] = array[0][j];  // Assume the first element is the minimum
        for (int i = 1; i < row; i++) {
            if (array[i][j] < result[j]) {
                result[j] = array[i][j]; // Update the minimum value if a smaller one is found
            }
        }
    }
    return result;
}

// Display the result array
void displayMinArray(int* result, int size) {
    cout << "result:";
    for (int i = 0; i < size; i++) {
        cout << " " << result[i];
    }
    cout << endl;
}

// Deallocate the memory used for the 2D array
void del2DArray(int** array, int row) {
    for (int i = 0; i < row; i++) {
        delete[] array[i];
    }
    delete[] array;
}