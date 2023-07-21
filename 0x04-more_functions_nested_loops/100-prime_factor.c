#include <stdio.h>
#include <math.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	long int n, m, i;

	n = 612852475143;
	m = -1;

	while (n % 2 == 0)
	{
		m = 2;
		n /= 2;
	}
	for (i = 3; i <= sqrt(n); i + 2)
	{
		while (n % i == 0)
		{
			m = i;
			n = n / i;
		}
	}
	if (n > 2)
	{
		m = n;
	}
	printf("%ld\n", m);
	return (0);
}
