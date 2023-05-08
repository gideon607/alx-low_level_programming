#include "main.h"

/**
 * append_text_to_file - Appends text.
 * @filename: constnt to name if the file..
 * @text_content: string to be added.
 *
 * Return: If fail or NULL - -1.
 *         If file not found or permitted - -1.
 *         else - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, lenst = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenst = 0; text_content[lenst];)
			lenst++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, lenst);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}

