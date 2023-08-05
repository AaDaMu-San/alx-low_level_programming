#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point.
 * @argc: argc.
 * @argv: argv.
 * Return: 0 || 1
 */
int main(int argc, char **argv)
{
	int i, amt, cn = 0;
	int vals[] = {25, 10, 5, 2, 1};

	if (argc - 1 != 1)
	{
		printf("%s\n", "Error");
		return (1);
	}
	amt = atoi(argv[1]);
	for (i = 0; i < 5; i++)
	{
		while (vals[i] <= amt)
		{
			cn++;
			amt -= vals[i];
		}
	}
	printf("%i\n", cn);

	return (0);
}
