#include "main.h"

/**
 * get_endianness - checks for little or big endian machines.
 * Return: 0 for big endian, 1 for little endian machines.
 */
int get_endianness(void)
{
	unsigned int ine = 1;
	char *c = (char *)&ine;

	if (*c)
		return (1); /* that is a Little endian machine */
	else
		return (0); /* that is a Big endian machine.*/
}

