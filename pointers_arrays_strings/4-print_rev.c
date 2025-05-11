#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: The string to be printed in reverse.
 */
void print_rev(char *s)
{
int len = 0;

/* Find the length of the string */
while (s[len] != '\0')
len++;

/* Print the string in reverse */
for (len -= 1; len >= 0; len--)
_putchar(s[len]);

_putchar('\n');
}
