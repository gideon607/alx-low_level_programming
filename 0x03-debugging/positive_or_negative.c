#include "main.h"
/**
 * positive_or_negative - check for positive or negtaive numbers
 * @i: the number thats to be checked
 * return: always 0
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative", i);
	else
		printf("%d is positive", i);
}
