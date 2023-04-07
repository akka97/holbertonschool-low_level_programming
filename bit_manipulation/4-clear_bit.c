#include "main.h"
#include <stdio.h>
/**
 * clear_bit - sets the value of a bit to 0
 * @n: number to find bit
 * @index: where to get the bit
 * Return: bit value or -1 if it fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
	{
		return (-1);
	}
	if (n != 0)
	{
		*n = *n & ~(1 << index);
		return (1);
	}
	return (-1);
}
