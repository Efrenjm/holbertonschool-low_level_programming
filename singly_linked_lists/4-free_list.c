#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * free_list - frees a list_t
 * @head: head of the list
 * Return: none
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			temp = head;
			head = head->next;
			free(temp->str);
			free(temp);
		}
		free(head->str);
		free(head);
	}
}
