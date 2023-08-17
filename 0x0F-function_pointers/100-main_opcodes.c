#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the opcodes of its own main function.
 * @argc: Arg count.
 * @argv: Arg vector vals.
 * Return: 0 Success
 */
int main(int argc, char *argv[])
{
	int b, i;
	int (*adres)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("1Error\n");
		exit(1);
	}

	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("2Error\n");
		exit(2);
	}

	for (i = 0; i < b; i++)
	{
		opcode = *(unsigned char *)adres;
		printf("%.2x", opcode);

		if (i == (b - 1))
			continue;
		printf(" ");
		adres++;
	}
	printf("\n");
	return (0);
}
