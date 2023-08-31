#include "lists.h"

/**
 * sum_listint - function that returns the sum of all
 * the data (n) of a listint_t linked list.
 * @head: ptr to head of list.
 * Return: sum of all data.
 */
int sum_listint(listint_t *head)
{
	int j = 0;

	while (head)
	{
		j += head->n;
		head = head->next;
	}
	return (j);
}
