#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: pointer to string
 *
 * Return: pointer to string
 */
char *cap_string(char *str)
{
int i = 0;
int capitalize_next = 1;

while (str[i] != '\0')
{
/* Check if current character is a separator */
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
str[i] == ',' || str[i] == ';' || str[i] == '.' ||
str[i] == '!' || str[i] == '?' || str[i] == '"' ||
str[i] == '(' || str[i] == ')' || str[i] == '{' ||
str[i] == '}')
{
capitalize_next = 1;
}
else if (capitalize_next && str[i] >= 'a' && str[i] <= 'z')
{
/* Capitalize if it's a lowercase letter after a separator */
str[i] = str[i] - 32;
capitalize_next = 0;
}
else
{
/* Not a separator and not the start of a new word */
capitalize_next = 0;
}
i++;
}

return (str);
}
