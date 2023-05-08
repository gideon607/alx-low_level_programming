#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reading texts.
 * @filename: constant file being read.
 * @letters: constamt number of letters.
 * Return: w- the numbers read and 0 if success and fail.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t filedse;
	ssize_t t;
	ssize_t w;

	filedse = open(filename, O_RDONLY);
	if (filedse == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(filedse, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(filedse);
	return (w);
}

