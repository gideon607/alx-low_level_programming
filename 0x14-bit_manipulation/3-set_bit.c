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
	return ((index > 63) ? -1 : (*n |= (1UL << index), 1));
}
