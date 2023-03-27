#include "main.h"
#include <stdio.h>
/**
 * print_array - function that prints n elements of an array
 * @a: array
 * @n: is the number of elements parameter
 * Return: a & n inputs
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}


