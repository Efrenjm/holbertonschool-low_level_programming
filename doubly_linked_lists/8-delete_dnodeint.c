#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * free_dlistint - frees a list_t
 * @head: head of the list
 * Return: none
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			temp = head;
			head = head->next;
			free(temp);
		}
		free(head);
	}
}
