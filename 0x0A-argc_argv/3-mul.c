#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point.
 * @argc: argc.
 * @argv: argv.
 * Return: always 0.
 */
int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}
	return (0);
}
