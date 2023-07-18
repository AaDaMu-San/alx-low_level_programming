#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char str[10] = "\_putchar";

	for (int i = 0; i <= 10; i++)
	{
		putchar(str[i]);
	}
	return (0);
}
