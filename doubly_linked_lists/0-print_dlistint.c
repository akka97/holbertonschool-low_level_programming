#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_dlistint - function that prints all elements of a dlistint_t
 * @h: pointer
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
