#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings into a newly allocated memory.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: Pointer to the new string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
char *new_str;
unsigned int len1 = 0, len2 = 0, i, j;

if (s1 != NULL)
{
for (i = 0; s1[i] != '\0'; i++)
len1++;
}
if (s2 != NULL)
{
for (i = 0; s2[i] != '\0'; i++)
len2++;
}

new_str = malloc(sizeof(char) * (len1 + len2 + 1));
if (new_str == NULL)
return (NULL);

for (i = 0; i < len1; i++)
new_str[i] = (s1 != NULL) ? s1[i] : '\0';

for (j = 0; j < len2; j++)
new_str[i + j] = (s2 != NULL) ? s2[j] : '\0';

new_str[i + j] = '\0';

return (new_str);
}
