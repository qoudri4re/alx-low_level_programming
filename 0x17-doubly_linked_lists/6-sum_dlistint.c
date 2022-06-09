#include "lists.h"

/**
 * sum_dlistint - sum all the data (n) of a dlistint_t linked list.
 * @head: pointer to the head node of the linked list.
 * Return: sum of all data in the linked list or 0 if the list is empty.
 **/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
