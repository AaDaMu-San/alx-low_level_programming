#include "main.h"

/**
 * _exits - prints error message
 * @error: exit val or descriptor.
 * @s: file name.
 * @fd: file descriptor.
 * Return: 0 success.
 */
int _exits(int error, char *s, int fd)
{
	switch (error)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(error);
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
		exit(error);
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
		exit(error);
	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(error);
	default:
		return (0);
	}
}

/**
 * main - copies the content of a file to another file.
 * @argc: argument count.
 * @argv: arguments.
 * Return: 0 success, (97-100) failures.
 */
int main(int argc, char **argv)
{
	int fd, fd2, r, w;
	char *tmp[1024];

	if (argc != 3)
		_exits(97, NULL, 0);

	fd2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd2 == -1)
		_exits(99, argv[2], 0);

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		_exits(98, argv[1], 0);

	while ((r = read(fd, tmp, 1024)) != 0)
	{
		if (r == -1)
			_exits(98, argv[1], 0);

		w = write(fd2, tmp, r);
		if (w == -1)
			_exits(99, argv[2], 0);
	}

	close(fd) == -1 ? (_exits(100, NULL, fd)) : close(fd);
	close(fd2) == -1 ? (_exits(100, NULL, fd2)) : close(fd2);

	return (0);
}
