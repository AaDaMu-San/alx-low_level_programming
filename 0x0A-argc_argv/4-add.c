#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - entry point.
 * @argc: argc.
 * @argv: argv.
 * Return: 0 || 1
 */
int main(int argc, char **argv)
{
	int i, i2, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (i2 = 0; argv[i][i2]; i2++)
		{
			if (!isdigit(argv[i][i2]))
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%i\n", sum);
	return (0);
}
