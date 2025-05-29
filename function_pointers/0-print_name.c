#include <stddef.h> /*  header NULL */
#include "function_pointers.h"

/**
* print_name - prints a name using a function pointer
* @name: name to print
* @f: function pointer to a function that takes a char * argument
*
* Return: void
*/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;

f(name);
}
