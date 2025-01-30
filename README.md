# Calculator Program

## Description
This is a simple calculator program written in C that performs basic arithmetic operations: addition, subtraction, multiplication, and division. The program provides a menu for users to choose an operation and input two numbers to calculate the result.

## Features
- Supports integer and floating-point numbers.
- Handles division by zero.
- Displays results with appropriate formatting.
- Provides a menu-driven interface for user interaction.

## Usage
1. Compile the program using a C compiler:
   ```sh
   gcc main.c -o main
   ```
2. Run the compiled program:
   ```sh
   ./main
   ```
3. Follow the on-screen menu to select an operation and enter values.
4. The program will display the result and prompt for further operations.
5. Select option `5` to exit the program.

## Menu Options
- `1` - Addition
- `2` - Subtraction
- `3` - Division
- `4` - Multiplication
- `5` - Exit

## Example Output
```
Menu:
1 - Add
2 - Subtraction
3 - Division
4 - Multiply
5 - Exit

Choose an operation: 1

Enter the value of x: 5
Enter the value of y: 3

The sum of 5 and 3 is: 8
```

## Notes
- If the user inputs a division by zero, an error message is displayed.
- The program continuously runs until the user selects the exit option.

## License
This project is open-source and available for use and modification.

