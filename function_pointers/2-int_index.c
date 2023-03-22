#include "function_pointers.h"
/**
 * int_index - integer to find
 * @array: first parameter
 * @size: second parameter
 * @cmp: third parameter
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	
	if (size <= 0)
		return (-1);

	if (array && size)
	{
		for (i = 0; i <= size; i++)
			if (cmp(array[i]) == 1)
				return (i);
	}
	
	return (-1);
}
