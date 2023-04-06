#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * sum_dlistint - function that returns sum of all data(n)
 * @head: list to print
 * Return: zero if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *new;
	unsigned int sum = 0;

	new = head;
	while (new != NULL)
	{
		sum += new->n;
		new = new->next;
	}
	return (sum);
}
