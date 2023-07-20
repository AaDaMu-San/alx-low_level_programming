#include "main.h"
/**
 * _isdigit - checks for digit value
 * c@: input to check
 *
 * Return: 1 (if digit) else 0
 */

int _isdigit(int c)
{
	if (c >=48 && c <= 57)
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
