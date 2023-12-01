#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * list_len - return the number of elements in a linked list
 * @h: head of a list
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}

