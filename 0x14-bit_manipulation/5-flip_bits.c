#include "main.h"

/**
 * flip_bits - Flips digits
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int xor = n ^ m;

	while (xor > 0)
	{
		if (xor & 1)
			count++;
		xor >>= 1;
	}

	return (count);
}
