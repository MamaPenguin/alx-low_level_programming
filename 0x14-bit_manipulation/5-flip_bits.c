#include "main.h"

/**
 *flip_bits - the number of bits to change to get from one number to another
 *@n: first number
 *@m: second number
 *
 *Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor, count = 0;

	for (xor = n ^ m; xor > 0; xor >>= 1)
	{
		count += (xor & 1);
	}

	return (count);
}
