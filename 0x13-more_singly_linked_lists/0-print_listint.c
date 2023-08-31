#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: ptr to head of list.
 * Return: num of nodes.
 */
size_t print_listint(const listint_t *h)
{
	int n;

	for (n = 0; h != NULL; n++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}
	return (n);
}
