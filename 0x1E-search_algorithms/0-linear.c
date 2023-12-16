#include "search_algos.h"

/**
 * linear_search - Searches for a values in an array (linear search)
 * @array: array for integers
 * @size: size of the array
 * @value: value to be found
 *
 * Return: index of value returned or -1 if not existing
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}

	return (-1);
}
