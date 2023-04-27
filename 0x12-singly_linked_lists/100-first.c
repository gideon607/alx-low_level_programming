#include <stdio.h>
void first(void) __attribute__ ((constructor));
/**
 * first - prints the or a sentence or sentences before the main exclusively.
 * function is then executed.
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

