# C - Pointers, Arrays and Strings

This project contains C functions that work with pointers, arrays, and strings. Part of the bootcamp curriculum covering fundamental concepts.

## What it does

Implements various string manipulation functions and pointer operations that mimic standard library functions like strlen, strcpy, etc. Also includes some array manipulation and memory functions.

## Technologies

- C programming language
- GCC compiler
- Standard C library concepts

## Functions implemented

### Basic pointer operations
- `reset_to_98()` - updates value through pointer
- `swap_int()` - swaps two integers using pointers

### String functions  
- `_strlen()` - calculates string length
- `_puts()` - prints string to stdout
- `_strcpy()` - copies strings
- `print_rev()` - prints string in reverse
- `rev_string()` - reverses a string in place
- `puts2()` - prints every other character
- `puts_half()` - prints second half of string

### String comparison and searching
- `_strcmp()` - compares two strings
- `_strchr()` - finds character in string
- `_strstr()` - finds substring
- `_strpbrk()` - searches for any matching characters
- `_strspn()` - gets length of matching prefix

### String modification
- `string_toupper()` - converts to uppercase
- `cap_string()` - capitalizes first letter of each word
- `leet()` - converts to 1337 speak

### Array and memory functions
- `print_array()` - prints array elements with formatting
- `reverse_array()` - reverses array in place
- `_memset()` - fills memory with constant byte
- `_memcpy()` - copies memory areas
- `print_chessboard()` - prints 8x8 character array
- `print_diagsums()` - calculates diagonal sums of square matrix

### Advanced
- `_atoi()` - converts string to integer with overflow handling

## How to compile and run

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 [main_file.c] [function_file.c] -o [output_name]
```

Example:
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-reset_to_98.c -o test
./test
```
