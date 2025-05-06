#include "main.h"

/**
 * _isdigit - Check if character is a digit through ascii
 * @c: The character to check
 *
 * Return: 1 if c is a digit or 0 if not
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
return (0);
}
