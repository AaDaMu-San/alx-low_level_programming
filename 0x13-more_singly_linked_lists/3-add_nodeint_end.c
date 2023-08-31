#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node
 * at the end of a listint_t list.
 * @head: ptr to ptr of head of list
 * @n: const int
 * Return: addr of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last = *head;
	listint_t *new_n = NULL;

	new_n = malloc(sizeof(listint_t));
	if (new_n == NULL && n != 0)
		return (NULL);

	new_n->n = n;
	new_n->next = NULL;

	if (*head == NULL)
	{
		*head = new_n;
		return (new_n);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new_n;
	return (new_n);
}
