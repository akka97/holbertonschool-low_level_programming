#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* create_array - function that create array
* @size: the address of memory to print
* @c: the size of the memory to print
* Return: Nothing.
*/
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(c));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
