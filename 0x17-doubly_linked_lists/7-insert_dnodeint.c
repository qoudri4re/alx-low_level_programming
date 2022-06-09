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
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to the head node of the linked list.
 * @idx: index of the list where the new node should be added index starts at 0
 * @n: data to be stored in the new node.
 * Return: the address of the new node, or NULL if it failed
 **/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int index = 0;
	dlistint_t *new_node, *current_node, *prev_node;

	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}
	if (idx == dlistint_len(*h))
	{
		new_node = add_dnodeint_end(h, n);
		return (new_node);
	}
	if (idx > dlistint_len(*h))
	{
		return (NULL);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	current_node = *h;
	while (current_node != NULL)
	{
		prev_node = current_node->prev;
		if (index == idx)
		{
			new_node->next = current_node;
			new_node->prev = prev_node;
			prev_node->next = new_node;
			current_node->prev = new_node;
			return (new_node);
		}
		index++;
		current_node = current_node->next;
	}
	return (NULL);
}
