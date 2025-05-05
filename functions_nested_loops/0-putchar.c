#include <stdio.h>
#include <unistd.h>

/**
* main - Entry point
*
* Description: Prints through write function which is system level
*
* Return: Always 0 (Success)
*/
int main(void)
{
write(1, "_putchar\n", 9);
return (0);
}
