#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * add_dnodeint_end - function that prints list int
 * @head: list to print
 * @n: number
 * Return: length of list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	if (temp != NULL)
		temp->next = new;
	new->prev = temp;
	return (new);
}
