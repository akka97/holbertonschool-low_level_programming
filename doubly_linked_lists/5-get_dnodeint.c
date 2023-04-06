#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * get_dnodeint_at_index - function that return nth node of dlistint
 * @head: list to print
 * @index: where to get int
 * Return: List lenght
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *new, *temp;
	unsigned int count = 0;

	new = head;
	temp = head;
	while (new != NULL)
	{
		new = new->next;
	}
	while (count != index)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
		count++;
	}
	return (temp);
}
