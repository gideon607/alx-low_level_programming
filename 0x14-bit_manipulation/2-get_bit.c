#include "main.h"

/**
 * get_bit - returns the value in bit
 * @n: search constant.
 * @index: index of the search bit.
 *
 * Return: the bit value.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	unsigned long int mask = 1UL << index;
	int bit_val = (n & mask) != 0;

	return (bit_val);
}

