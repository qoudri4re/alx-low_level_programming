#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: pointer to the head node of the linked list.
 * Return: numbers of elements in the linked list
 **/

size_t dlistint_len(const dlistint_t *h)
{
	int elements = 0;

	while (h != NULL)
	{
		h = h->next;
		elements++;
	}

	return (elements);
}

/**
 * delete_dnodeint_at_index - deletes the node at
 * index of a dlistint_t linked list.
 * @head: pointer to the head node of the linked list.
 * @index: position of the node to be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 **/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int len = 0, idx = 0;
	dlistint_t *current_node, *prev_node, *next_node;

	if (*head != NULL)
	{
		len = dlistint_len(*head), current_node = *head;
		if (len < index)
			return (-1);
		while (current_node != NULL)
		{
			if (len == 1)
			{
				*head = NULL;
				free(current_node);
				return (1);
			}
			prev_node = current_node->prev;
			next_node = current_node->next;
			if (index == 0)
			{
				next_node->prev = NULL;
				*head = next_node;
				break;
			}
			if (next_node == NULL)
			{
				prev_node->next = NULL;
				break;
			}
			if (index == idx)
			{
				prev_node->next = next_node, next_node->prev = prev_node;
				break;
			}
			current_node = current_node->next, idx++;
		}
		free(current_node);
		return (1);
	}
	return (-1);
}
