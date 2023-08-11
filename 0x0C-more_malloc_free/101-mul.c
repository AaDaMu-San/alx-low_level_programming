#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - multiplies two positive numbers.
 * @argc:
 * @argv:
 * Return: true 0, else 1.
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("%s\n", "Error");
		exit(98);
	}
	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
