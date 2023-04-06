#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * dlistint_len - function that returns the numb of elements
 * @h: pointer
 * Return: length of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
