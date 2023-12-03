#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - get node at index
 * @head: head of the list
 * @index: index of the element
 * Return: none
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;

	for (count = 0; count < index; count++)
	{
		head = head->next;
	}
	return (head);
}
