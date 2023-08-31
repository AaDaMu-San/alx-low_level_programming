#include "lists.h"

/**
 * listint_len - function that returns the number of
 * elements in a linked listint_t list.
 * @h: ptr to head of list.
 * Return: num of elements.
 */
size_t listint_len(const listint_t *h)
{
	int n;

	for (n = 0; h != NULL; n++)
		h = h->next;
	return (n);
}
