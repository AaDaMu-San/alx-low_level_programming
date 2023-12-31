#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Adds two input arguments
 * @a: 1st input int.
 * @b: 2nd input int.
 * Return: result of operation.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two input arguments.
 * @a: 1st input int.
 * @b: 2nd input int.
 * Return: result of operation.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two input args.
 * @a: 1st input int.
 * @b: 2nd input int.
 * Return: result of operation.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two input args.
 * @a: 1st input int.
 * @b: 2nd input int.
 * Return: result of operation.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Modulus of two args.
 * @a: 1st input int.
 * @b: 2nd input int.
 * Return: result of operation.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
