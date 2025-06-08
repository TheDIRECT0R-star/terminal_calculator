# Terminal Calculator

## Overview
This is a simple command-line calculator program written in C. It parses and evaluates basic arithmetic expressions with two operands and one operator, supporting addition, subtraction, multiplication, division, and modulo operations.

## Features
- Accepts user input in the format: `<number> <operator> <number>`
- Supports operators: `+`, `-`, `*`, `/`, `%`
- Handles errors such as division or modulo by zero
- Provides immediate result output in the terminal
- Built with modular design separating input parsing, calculation logic, and utilities

## Usage
1. Compile the program using `make`
2. Run the executable `./calc`
3. Enter expressions like `3 + 5` or `10 % 3`
4. To exit, type `exit`

## Example
calc> 7 * 8
You typed: 7 * 8
Result: 56
calc> exit


## Project Structure
- `main.c`: Handles program loop and user input
- `calculator.c`: Contains the core calculation logic
- `utils.c`: Utility functions (e.g., string to integer conversion)
- `calculator.h`, `utils.h`: Header files with function declarations
- `Makefile`: Build automation script

## Build
Run `make` to compile the project. This will generate the executable named `calc`.

## Author
Aymane 
