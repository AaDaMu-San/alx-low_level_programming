#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int t, o, T, O;


	for (t = '0'; t <= '9'; t++)
	{
		for (o = '0'; o <= '9'; o++)
		{
			for (T = t; T <= '9'; T++)
			{
				for (O = (o + 1); O <= '9'; O++)
				{
					putchar(t);
					putchar(o);
					putchar(' ');
					putchar(T);
					putchar(O);

					if (!((t == '9' && o == '8') &&
						(T == '9' && O == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
				O = '0';
			}
		}
	}
	putchar('\n');
	return (0);
}
