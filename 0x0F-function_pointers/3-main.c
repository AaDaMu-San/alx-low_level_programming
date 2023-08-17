#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

#define ARGV(X, S) (argv[X][0] == S)

/**
 * main - This func performs a calc on 2 numbers using
 * the given operator.
 * @argc: num of args.
 * @argv: str of vals of args.
 * Return: 0 Success, else 0.
 */
int main(int argc, char *argv[])
{
	int i, j, out;
	char *op;

	if (argc != 4)
	{
		printf("E rror\n");
		exit(98);
	}

	i = atoi(argv[1]);
	j = atoi(argv[3]);
	op = argv[2];

	if ((ARGV(2, '/') || ARGV(2, '%')) && j == 0)
	{
		printf("Err or\n");
		exit(100);
	}

	if (!(get_op_func(op)))
	{
		exit(99);
	}

	out = (get_op_func(op))(i, j);
	printf("%d\n", out);

	return (0);
}
