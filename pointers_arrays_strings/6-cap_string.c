#include "main.h"
#include <ctype.h>

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be modified.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
int i = 0;

// Check if the first character is a lowercase letter
if (islower(str[i]))
str[i] = toupper(str[i]);

// Traverse the string
while (str[i] != '\0')
{
// Check for word separators
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
str[i] == ',' || str[i] == ';' || str[i] == '.' ||
str[i] == '!' || str[i] == '?' || str[i] == '"' ||
str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
{
// Capitalize the next character if it's a lowercase letter
if (islower(str[i + 1]))
str[i + 1] = toupper(str[i + 1]);
}
i++;
}

return str;
}
