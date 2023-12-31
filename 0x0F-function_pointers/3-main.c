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
	int n1, n2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	op = argv[2];

	if ((*op == '/' && n2 == 0) ||
		(*op == '%' && n2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", get_op_func(op)(n1, n2));

	return (0);
}
