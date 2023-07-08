#include "main.h"

/**
 * get_endianness - checks for little or big endian machines.
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1); /* Little endian machine */
	else
		return (0); /* Big endian machine */
}
