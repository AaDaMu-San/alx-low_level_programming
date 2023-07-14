#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n,i;


	for (n = '0'; n <= '9'; n++)
	{
		for (i = (n + 1); i <= '9'; i++)
		{
			putchar(n);
			putchar(i);

			if (n != '8' || i != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
