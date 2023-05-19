#include "search_algos.h"
/**
 * linear_search - function that search for a value
 * in an array of integers using linear search alg
 * @array: array of integers
 * @size: size of array
 * @value: value to search
 * Return: -1 if value is not present in array or if array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
