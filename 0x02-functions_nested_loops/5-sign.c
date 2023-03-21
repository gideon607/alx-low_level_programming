#include "main.h"
/**
 *print_sign -function of signs
 *@n: function parameter
 *Return: 1, 0 and -1 - if successful
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}