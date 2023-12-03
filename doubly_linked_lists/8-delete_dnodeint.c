#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at index
 * @head: head of the list
 * @index: index where to insert
 * Return: none
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count;

	if (head == NULL || *head == NULL)
		return (-1);
	current = *head;
	for (count = 0; count < index; count++)
	{
		if (current == NULL)
			return (-1);
		current = current->next;
	}
	if (current == NULL)
		return (-1);

	if (current->prev != NULL)
		current->prev->next = current->next;
	else
		*head = current->next;

	if (current->next != NULL)
		current->next->prev = current->prev;
	free(current);

	return (1);
}
