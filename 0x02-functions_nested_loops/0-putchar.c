#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	char str[10] = "_putchar";

	for (i = 0; i < 9; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
