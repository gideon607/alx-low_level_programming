#include "main.h"

/**
 * print_square - Prints a square followed by a new line
 * @c: size of square
 * Return: void
 */
void print_square(int c)
{
	int x, y;

	if (c <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < c; x++)
		{
			for (y = 0; y < c; y++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
