This C++ program allows the user to input the dimensions (rows and columns) for a 2D array and fill it with integers. It then finds the minimum value in each column and displays these values.

## Features

- **Create Dimensions**: Dynamically allocate memory for a 2D array based on user input (rows and columns).
- **Fill Array**: Input integers to populate the 2D array.
- **Find Minimum Values**: Calculate the minimum value in each column of the array.
- **Display Results**: Output the minimum values for each column.
- **Memory Management**: Properly deallocate memory after usage.

## Usage

### 1. Input Dimensions

The user is prompted to input the number of rows and columns (both must be positive integers).

### Example:
```
Enter the number of rows (positive integer): 3
Enter the number of columns (positive integer): 3
```

### 2. Fill the Array

For each cell in the array, the user enters an integer value. The program will prompt the user to provide values for each position in the 2D array.

```
Enter element for row 1, column 1: 5
Enter element for row 1, column 2: 3
Enter element for row 1, column 3: 8
Enter element for row 2, column 1: 7
Enter element for row 2, column 2: 2
Enter element for row 2, column 3: 6
Enter element for row 3, column 1: 4
Enter element for row 3, column 2: 9
Enter element for row 3, column 3: 1
```

### 3. Output Minimum Values

Once the array is fully populated, the program calculates and displays the minimum value in each column.

```
result: 4 2 1
```

In this case:
- The minimum value in column 1 is `4`.
- The minimum value in column 2 is `2`.
- The minimum value in column 3 is `1`.

### 4. Exit the Program

After displaying the minimum values, the program terminates, ensuring that all dynamically allocated memory is deallocated to avoid memory leaks.

## Getting Started

### Prerequisites

- C++ Compiler: Ensure you have a C++ compiler installed (e.g., g++).
- Code Editor or IDE: Use any editor or IDE that supports C++ (e.g., Visual Studio Code, CLion, Code::Blocks).

### Compilation

To compile the program, use the following command:
```
g++ -o arrayProcessor arrayProcessor.cpp
```

### Running the Program

After compilation, run the program with the following command:
```
./arrayProcessor
```

### Input Commands

The program will prompt you to enter the number of rows and columns, followed by elements of the 2D array. Once the array is populated, it will display the minimum value in each column.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.














