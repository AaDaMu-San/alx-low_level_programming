#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: .
 * @text_content: .
 * Return: 1 success, -1 failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t i = 0;
	ssize_t w;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT, 0600);
		if (fd == -1)
			return (-1);
		return (1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	while (text_content[i] != 0)
		i++;
	w = write(fd, text_content, i);

	if (w == -1)
		return (-1);
	close(fd);
	return (1);
}
