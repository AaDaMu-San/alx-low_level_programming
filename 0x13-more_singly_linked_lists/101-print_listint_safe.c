#include "lists.h"

/**
 * print_listint_safe - function that prints a listint_t linked list
 * @head: ptr to head of list
 * Return: num of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t c = 0;

	while (head && head->next < head)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		c++;
		head = head->next;
	}
	if (head)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		c++;
		printf("-> [%p} %d\n", (void *) head->next, head->next->n);
	}
	return (c);
}
