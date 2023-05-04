#include "main.h"

/**
 * set_bit - sets an index to 1 at a given location.
 * @n: pointer constant.
 * @index: index of the bit set to 1.
 *
 * Return: 1 for successful, -1 for fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int masks;

	if (index > 63)
	{
		return (-1);
	}
	masks = 1UL << index;
	*n |= masks;

	return (1);
}
