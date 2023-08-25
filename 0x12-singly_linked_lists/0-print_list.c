#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: list to print.
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%li] %s\n", strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
