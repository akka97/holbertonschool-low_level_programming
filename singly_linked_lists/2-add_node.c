#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - add node to the beginning of list
 * @str: list element to add
 * @head: where to add str
 * Return: new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	new->len = i;
	new->next = *head;
	*head = new;
	return (*head);
}
