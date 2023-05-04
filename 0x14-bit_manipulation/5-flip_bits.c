#include "main.h"

/**
 * flip_bits - used in fliping digits in binary.
 * @n: first constant number.
 * @m: second constant number.
 *
 * Return: bits number are returned.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int counter = 0;
	unsigned long int xor = n ^ m;

	while (xor > 0)
	{
		if (xor & 1)
			counter++;
		xor >>= 1;
	}
	return (counter);
}
