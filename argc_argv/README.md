# argc_argv

This project covers working with command line arguments in C programming. It has several programs that handle argc and argv in different ways - printing program names, counting arguments, and doing basic math operations on command line inputs.

## Technologies
- C programming
- Command line argument handling
- Standard library functions (atoi, isdigit)

## Files Implemented
- **0-whatsmyname.c** - Prints the program's name
- **1-args.c** - Counts and prints number of arguments passed
- **2-args.c** - Prints all arguments received, one per line  
- **3-mul.c** - Multiplies two numbers passed as arguments
- **4-add.c** - Adds positive numbers with input validation

## How to Run

Compile any file with gcc:
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 filename.c -o outputname
```

Then run with arguments:
```bash
./outputname arg1 arg2 arg3
```

For example:
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-mul.c -o mul
./mul 5 7
```

The add program has validation to make sure you only pass positive numbers, and the multiply program needs exactly two arguments or it prints an error.
