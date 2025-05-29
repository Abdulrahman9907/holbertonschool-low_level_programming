# Functions and Nested Loops

This is my C programming project for the functions and nested loops module. It's a collection of basic functions that handle character checking, math operations, and some formatting tasks.

## What it does

The project implements various utility functions like checking if a character is alphabetic, calculating absolute values, printing time formats, and working with multiplication tables. Each function is in its own file and follows specific requirements.

## Technologies

- C programming language
- GCC compiler
- Standard C library functions

## How to run

Compile any function with its test file:
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c [test-file].c [function-file].c -o [output-name]
```

For example:
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 5-main.c 5-sign.c -o 5-sign
./5-sign
```

## Functions implemented

- **Character checking**: `_isalpha()` to check if character is alphabetic
- **Math operations**: `_abs()` for absolute value, `add()` for addition, `print_last_digit()` 
- **Sign checking**: `print_sign()` returns and prints number signs
- **Time formatting**: `jack_bauer()` prints every minute of a 24-hour day
- **Tables**: `times_table()` prints the 9 times multiplication table
- **Number sequences**: `print_to_98()` prints numbers from any starting point to 98
- **Basic output**: Functions for printing alphabet and the "_putchar" string

## Notes

The times table formatting was tricky to get the spacing right. Had some issues with the Jack Bauer function's nested loops at first. The project uses a provided header file with function prototypes and a custom `_putchar` function instead of printf for most output.
