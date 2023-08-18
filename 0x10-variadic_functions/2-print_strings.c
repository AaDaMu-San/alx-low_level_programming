#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: str printed between strs.
 * @n: num of str passed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = n;
	char *str;

	va_list list;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(list, n);

	while (i--)
		printf("%s%s", (str = va_arg(list, char *)) ? str : "(nil)",
				i ? (separator ? separator : "") : "\n");
	va_end(list);
}
