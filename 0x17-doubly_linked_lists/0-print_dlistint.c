#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 0;

	if (h)
	{
		while (h)
		{
			printf("%d\n", h->n);
			node_count++;
			h = h->next;
		}
	}

	return (node_count);
}
