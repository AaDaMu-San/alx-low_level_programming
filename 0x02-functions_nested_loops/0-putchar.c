#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char str[10] = "_putchar\n";
	int i;

	for (i = 0; i < 9; i++)
	{
		putchar(str[i]);
	}
	return (0);
}
