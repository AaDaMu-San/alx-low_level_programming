#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char a_f;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (a_f = 'a'; a_f <= 'f'; a_f++)
	{
		putchar(a_f);
	}
	putchar('\n');
	return (0);
}
