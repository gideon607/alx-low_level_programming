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
	unsigned long int masks;
	int bit_value;

	if (index > 63)
	{
		return (-1);
	}

	masks = 1UL << index;
	bit_value = (n & masks) != 0;

	return (bit_value);
}

