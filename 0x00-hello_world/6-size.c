#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %d bit(s)\n", (int)(sizeof(a) * 8));
	printf("Size of an int: %d bit(s)\n", (int)(sizeof(b) * 8));
	printf("Size of a long int: %d bit(s)\n", (int)(sizeof(c) * 8));
	printf("Size of a long long int: %d bit(s)\n", (int)(sizeof(d) * 8));
	printf("Size of a float: %d bit(s)\n", (int)(sizeof(f) * 8));
	return (0);

}
