#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * sum_dlistint - sum all the elements in list
 * @head: head of the list
 * Return: sum of all it's elements
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
