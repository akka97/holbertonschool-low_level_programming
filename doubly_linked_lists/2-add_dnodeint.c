#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * add_dnodeint - function that prints list int
 * @head: list to print
 * @n: number
 * Return: length of list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
