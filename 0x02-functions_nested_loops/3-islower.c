#include "main.h"
/**
 * _islower - this is to print lowercase
 * @c: parameter to be printed
 * Return: 0 - if this is successful
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
