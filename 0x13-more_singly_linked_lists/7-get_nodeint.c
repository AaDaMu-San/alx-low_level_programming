#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the
 * nth node of a listint_t linked list.
 * @head: ptr to head of list.
 * @index: index of node at 0.
 * Return: nth node of list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *now = head;
	unsigned int i = 0;

	while (now != NULL)
	{
		if (i == index)
			return (now);
		i++;
		now = now->next;
	}
	return (NULL);
}
