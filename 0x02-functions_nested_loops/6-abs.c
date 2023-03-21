#include "main.h"
/**
 * _abs - is for absolute
 * @a: parameter
 * Return: Always a
 */
int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}

