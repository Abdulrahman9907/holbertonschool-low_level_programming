#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
* print_numbers - Prints numbers, followed by a new line.
* @separator: The string to be printed between numbers.
* @n: The number of integers passed to the function.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
int num;

va_start(args, n);

for (i = 0; i < n; i++)
{
num = va_arg(args, int);
_putchar(num + '0'); /* Convert int to char and print */

if (separator != NULL && i < n - 1)
{
const char *sep = separator;
while (*sep)
_putchar(*sep++);
}
}

va_end(args);
_putchar('\n');
}
