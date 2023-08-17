#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - This func performs a calc on 2 numbers using
 * the given operator.
 * @argc: num of args.
 * @argv: str of vals of args.
 * Return: 0 Success, else 0.
 */
int main(int argc, char *argv[])
{
	int i, j;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	i = atoi(argv[1]);
	j = atoi(argv[3]);
	f = get_op_func(argv[2]);

	if (f == NULL || (argv[2][1] != '\0'))
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", f(i, j));

	return (0);
}
