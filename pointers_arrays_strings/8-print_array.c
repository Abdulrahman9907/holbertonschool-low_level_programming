#include "main.h"

/**
 * print_array - Prints n elements of an array of integers
 * @a: Pointer to the array
 * @n: Number of elements to print
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
if (i > 0)
{
_putchar(',');
_putchar(' ');
}
if (a[i] < 0)
{
_putchar('-');
a[i] = -a[i];
}
if (a[i] == 0)
{
_putchar('0');
}
else
{
int num = a[i], div = 1;

while (num / div >= 10)
div *= 10;

while (div > 0)
{
_putchar((num / div) % 10 + '0');
div /= 10;
}
}
}
_putchar('\n');
}
