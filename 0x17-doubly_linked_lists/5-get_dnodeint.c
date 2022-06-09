#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to the head node of the linked list.
 * @index: index of the node, starting from 0
 * Return: nth node of a dlistint_t linked list or NULL if node does not exist
 **/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx = 0;

	if (head != NULL)
	{
		while (head != NULL)
		{
			if (idx == index)
			{
				return (head);
			}
			head = head->next;
			idx++;
		}
	}
	return (NULL);
}
