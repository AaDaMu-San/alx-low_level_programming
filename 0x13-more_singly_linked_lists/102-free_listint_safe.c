#include "lists.h"

/**
 * free_listint_safe - function that frees a listint_t list
 * @h: ptr to list
 * Return: freed list size
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t c = 0;

	while (*h && ((*h)->next < *h))
	{
		tmp = (*h)->next;
		c++;
		free(*h);
		*h = tmp;
	}
	if (*h)
	{
		free(*h);
		c++;
	}
	*h = NULL;
	return (c);
}
