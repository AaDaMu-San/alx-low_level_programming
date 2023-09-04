#include "main.h"

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: .
 * @letters: .
 * Return: number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r, w;
	char *tmp;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	tmp = malloc(sizeof(char) * letters);
	if (tmp == NULL)
		return (0);


	r = read(fd, tmp, letters);
	if (r == -1)
	{
		free(tmp);
		close(fd);
		return (0);
	}

	w = write(STDOUT_FILENO, tmp, r);
	if (w == -1)
	{
		free(tmp);
		close(fd);
		return (0);
	}

	free(tmp);
	close(fd);
	return (r);
}
