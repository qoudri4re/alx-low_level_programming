#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer to the head node of the linked list.
 * Return: number of nodes
 **/

size_t print_dlistint(const dlistint_t *h)
{
	int numnode = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		numnode++;
	}
	return (numnode);
}
