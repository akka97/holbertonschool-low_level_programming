#include "main.h"
#include <stdlib.h>

/**
 * array_range -  Creates an array of integers and contains value
 * @min: minimum value
 * @max: maximum value
 * Return: Pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *array_int;
	int i, l;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	array_int = malloc(l * sizeof(int));
	if (array_int == NULL)
		return (NULL);
	for (i = 0; i < l; i++)
		array_int[i] = min++;

	return (array_int);
}
