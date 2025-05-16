#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: string containing the bytes to match
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
while (*haystack)
{
char *h = haystack;
char *n = needle;

while (*h && *n && (*h == *n))
{
h++;
n++;
}
if (*n == '\0')
return haystack;
haystack++;
}
return NULL;
}
