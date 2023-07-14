#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, i, N, I;


	for (n = '0'; n <= '9'; n++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			for (N = n; N <= '9'; N++)
			{
				for (I = (i + 1); I <= '9'; I++)
				{
					putchar(n);
					putchar(i);
					putchar(' ');
					putchar(N);
					putchar(I);

					if (!((n == '9' && i == '8') &&
						(N == '9' && I == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
				I = '0';
			}
		}
	}
	putchar('\n');
	return (0);
}
