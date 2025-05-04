#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
*
* Description: prints numbers through int
*
* Return: Always 0 (Success)
*/
int main(void)
{
int num;
for (num = 0; num < 10; num++)
{
putchar(num + '0');
}
putchar('\n');
return (0);
}
