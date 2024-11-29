# Custom `printf` Project

## Project Overview

This project implements a custom version of the `printf` function in C. It involves parsing a format string, handling different format specifiers, and printing corresponding outputs to the standard output. This custom `printf` mimics the behavior of the original `printf` function.

## File Structure

- **main.h**  
  Header file containing the function prototypes for all the functions used in the project.
  
- **main.c**  
  Contains the main function to test the logic of the custom `printf` implementation. This is where the function is called with different format specifiers to ensure correctness.

- **_printf.c**  
  This is the core implementation of the custom `printf` function. It takes in a format string and handles different format specifiers like `%d`, `%s`, `%c`, and more, printing the results to the standard output.

- **print_functions.c**  
  Contains individual functions for printing different types of data, such as integers, strings, and characters. These functions are used by `_printf.c` to handle specific format specifiers.

## How It Works

- The custom `_printf` function processes the format string and identifies each format specifier.
- For each specifier, it calls the appropriate function from `print_functions.c` to handle the printing of data.
- The project supports various format specifiers, and each is processed and printed accordingly.

## Team Collaboration

The project was developed collaboratively, with each member contributing to specific components:

1. **Design & Logic**  
   - The overall structure of `_printf` was planned together to ensure each team member understood the required logic.
   
2. **File Organization**  
   - The header file `main.h` was shared among the team to ensure consistency in function declarations.
   - `main.c` served as a test file where the logic was validated with various test cases.

3. **Functionality Development**  
   - Each member took responsibility for implementing specific print functions in `print_functions.c` (e.g., printing integers, characters, and strings).
   
4. **Testing & Debugging**  
   - The team worked together on debugging and testing, using `main.c` to ensure that all edge cases and format specifiers were handled correctly.

## Key Features

- Custom implementation of `printf`.
- Support for standard format specifiers like `%d`, `%s`, `%c`, and more.
- Flexible design allowing easy extension to support more format specifiers in the future.

## Installation

To compile and run the project:

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/custom_printf.git

2. Compile this code:
**gcc -Wall -Wextra -Werror -pedantic *.c -o    
    **printf**
3. Run this code:
    **./printf**

* In this project, instead of using the standard library's built-in printf function, the goal is to create your own version that mimics its behavior. The implementation typically involves handling different format specifiers, such as %d, %s, %f, and others, to print integers, strings, floating-point numbers, and more.