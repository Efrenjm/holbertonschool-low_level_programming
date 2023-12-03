#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at index
 * @h: head of the list
 * @idx: index where to insert
 * @n: value to insert
 * Return: none
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current;
	unsigned int count;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	current = *h;
	if (idx == 0)
		return (add_dnodeint(h, n));
	for (count = 0; count <= idx; count++)
	{
		if (current->next == NULL && count == idx)
			return (add_dnodeint_end(h, n));
		else if (current->next == NULL && count < idx)
			return (NULL);
		if (count < idx)
			current = current->next;
	}
	new_node->next = current;
	new_node->prev = current->prev;
	current->prev->next = new_node;
	current->prev = new_node;
	return (new_node);
}
