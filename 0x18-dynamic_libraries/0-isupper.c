#include "main.h"
#include <stdio.h>
/**
 * _isupper - check for c if upper
 *
 * @c: input of c.
 *
 * Return: 1 if uppercase, 0 if not
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
