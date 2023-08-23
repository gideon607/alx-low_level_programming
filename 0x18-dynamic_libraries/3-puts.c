#include "main.h"
/**
 * _puts - prints a string, follwed by line
 * @str: parameter print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}

