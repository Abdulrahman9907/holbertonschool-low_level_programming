#include "main.h"

/**
* print_binary - prints the binary representation of a number
* @n: the number to convert to binary
*
* Return: void
*/
void print_binary(unsigned long int n)
{
unsigned long int mask;
int flag = 0;

if (n == 0)
{
_putchar('0');
return;
}

mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

while (mask > 0)
{
if (n & mask)
{
_putchar('1');
flag = 1;
}
else if (flag)
{
_putchar('0');
}
mask >>= 1;
}
}
