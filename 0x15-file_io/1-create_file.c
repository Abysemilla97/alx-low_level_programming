#include "main.h"

/**
 * create_file - a function creating a file.
 * @filename: the file name to create.
 * @text_content: a null terminated string to write a file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int rwrite;
	int letters;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (letters = 0; text_content[letters]; letters++)
		;
	rwrite = write(fd, text_content, letters);

	if (rwrite == -1)
		return (-1);

	close(fd);

	return (1);
}

