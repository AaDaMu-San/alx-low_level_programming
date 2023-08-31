#include "lists.h"

/**
 * add_nodeint - function that adds a new node at
 * the beginning of a listint_t list.
 * @head: ptr to head of list.
 * @n: const int.
 * Return: addr of new elemnt.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	new = malloc(sizeof(listint_t));
	if (new == NULL && n != 0)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
