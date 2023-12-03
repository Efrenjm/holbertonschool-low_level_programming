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

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	current = *h;
	for (count = 0; count < idx - 1; count++)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
	}
	if (current == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = current->next;
	new_node->prev = current;

	if (current->next != NULL)
		current->next->prev = new_node;
	current->next = new_node;
	return (new_node);
}
