#include "main.h"
#include <stdio.h>

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
int i, j, product;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
product = i * j;

if (j != 0)
printf(", ");

if (product < 10 && j != 0)
printf(" ");

printf("%d", product);
}
printf("$\n");
}
}
