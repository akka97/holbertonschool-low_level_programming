#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * free_dlistint - function that frees a dlistint_t
 * @head: list to print
 * Return: Exit_Success
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *new;

	while (head != NULL)
	{
		new = head;
		head = head->next;
		free(new);
	}
}
