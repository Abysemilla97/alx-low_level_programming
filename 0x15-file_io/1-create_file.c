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

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
	for (letters = 0; text_content[letters]; letters++)
		continue;

	rwrite = write(fd, text_content, letters);
	if (rwrite == -1 || rwrite != letters)
	{
		close(fd);
		return (-1);
	}
	}

	close(fd);

	return (1);
}
