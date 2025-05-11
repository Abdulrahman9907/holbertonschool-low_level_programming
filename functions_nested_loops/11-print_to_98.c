#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The starting number
 *
 * Description: Numbers are separated by a comma and a space.
 * The sequence is in order (ascending if n < 98, descending if n > 98).
 * The last number printed is always 98.
 */
void print_to_98(int n)
{
if (n <= 98)
{
/* Count up from n to 98 */
while (n < 98)
{
printf("%d, ", n);
n++;
}
}
else
{
/* Count down from n to 98 */
while (n > 98)
{
printf("%d, ", n);
n--;
}
}

/* Print 98 without a trailing comma */
printf("98\n");
}
