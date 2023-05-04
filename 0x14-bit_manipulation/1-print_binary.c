#include "main.h"

/**
 * print_binary - prints binary equal of decimal
 * @n: the number to result in the print.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) ? '1' : '0');
}
