#include "main.h"

/**
 * binary_to_uint - function that converts from binary to unsigned int
 * @b: constant string binary number.
 *
 * Return: converted unsigned interger.
 */
unsigned int binary_to_uint(const char *b)
{
	int countr;
	unsigned int uns_values = 0;

	if (!b)
		return (0);

	for (countr = 0; b[countr]; countr++)
	{
		if (b[countr] < '0' || b[countr] > '1')
			return (0);
		uns_values = (uns_values << 1) | (b[countr] - '0');
	}

	return (uns_values);
}
