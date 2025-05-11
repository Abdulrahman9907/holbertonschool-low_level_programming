#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to use from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0;

/* Find the end of the destination string */
while (dest[i] != '\0')
i++;

/* Append at most n bytes from src to dest */
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}

/* Null-terminate the resulting string */
dest[i] = '\0';

return (dest);
}
