#include "main.h"

/**
 * read_textfile - a function reading a text file and
 * prints it to the 'POSIX' stdout.
 * @filename: the name of the file.
 * @letters: numb of letters to be read and printed.
 *
 * Return: the actual number of letters it can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t nrd, nwr;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	{
		if (buffer == NULL)
			return (0);
	}

	nrd = read(fd, buffer, letters);
	nwr = write(STDOUT_FILENO, buffer, nrd);

	close(fd);
	free(buffer);

	return (nwr);
}
