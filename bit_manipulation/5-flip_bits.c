#include "main.h"

/**
* flip_bits - returns the number of bits needed to flip to get from n to m
* @n: first number
* @m: second number
*
* Return: number of bits to flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor_result;
unsigned int count = 0;

xor_result = n ^ m;

while (xor_result)
{
count += xor_result & 1;
xor_result >>= 1;
}

return (count);
}
