# More Functions and Nested Loops

This is my C programming project for the functions and nested loops module at bootcamp. It has a bunch of functions that do different things like checking characters, doing math, and printing patterns.

## What it does

The project includes functions for:
- Character checking (_isupper, _isdigit)
- Basic math operations (multiplication)
- Number printing with different patterns
- Drawing shapes and lines using characters
- FizzBuzz implementation

## Technologies Used

- C programming language
- GCC compiler
- Custom _putchar function for output

## How to Run

Compile any function with its test file:
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 [main-file.c] [function-file.c] -o [output-name]
```

For example:
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-isupper.c -o test
./test
```

For functions that use _putchar, include it in compilation:
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-print_numbers.c -o test
```

## Functions Implemented

- **0-isupper.c** - Checks if character is uppercase
- **1-isdigit.c** - Checks if character is a digit
- **2-mul.c** - Multiplies two integers
- **3-print_numbers.c** - Prints numbers 0-9
- **4-print_most_numbers.c** - Prints 0-9 except 2 and 4
- **5-more_numbers.c** - Prints 0-14 ten times
- **6-print_line.c** - Draws straight lines
- **7-print_diagonal.c** - Draws diagonal lines
- **8-print_square.c** - Prints squares
- **9-fizz_buzz.c** - Classic FizzBuzz program
- **10-print_triangle.c** - Prints triangles

## Notes

The triangle function was tricky to get the spacing right. Had to use nested loops to handle the spaces before each row of # characters.

FizzBuzz took a few tries to get the logic order correct - checking for both multiples first, then individual ones.

Some functions are more efficient than others but they all pass the tests.
