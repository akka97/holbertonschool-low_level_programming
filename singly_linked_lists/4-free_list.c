#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * free_list - printes list values
 * @head: list value to print
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
