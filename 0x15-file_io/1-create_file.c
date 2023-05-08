#include "main.h"

/**
 * create_file - file creatios..
 * @filename: A constant pointer to the file to create.
 * @text_content: A constant pointer to a string to write to the file.
 *
 * Return: If the function fails - -1. else - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int filedse, w, lenst = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenst = 0; text_content[lenst];)
			lenst++;
	}

	filedse = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(filedse, text_content, lenst);

	if (filedse == -1 || w == -1)
		return (-1);

	close(filedse);

	return (1);
}

