#include "main.h"
/**
 * _strcat - appends src to drc string
 * @dest: strings appended by src
 * @src: strings appended to dest
 *
 * Return: address in destination.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}
	return (dest);
}
