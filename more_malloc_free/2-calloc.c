#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocated memory for an array using malloc
 * @nmemb: Number of elements
 * @size: Size of bytes for each elements
 * Return: Null if size is zero, if malloc fails return pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *my_arr;
	unsigned int j;

	if (nmemb == 0 || size == 0)
		return (NULL);

	my_arr = malloc(nmemb * size);

	if (my_arr == NULL)
		return (NULL);

	j = 0;
	while (j < nmemb * size)
	{
		my_arr[j] = 0;
		j++;
	}
	return (my_arr);
}
