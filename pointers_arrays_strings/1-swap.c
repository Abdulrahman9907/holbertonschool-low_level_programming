#include "main.h"

/**
 * swap_int - swap values while using a temp.
 * @a: Pointer to integer a.
 * @b: Pointer to integer b
 */
void swap_int(int *a, int *b)
{
int temp =     *a;
*a = *b;
*b = temp;
}
