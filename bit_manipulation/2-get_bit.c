#include "main.h"
#include <stdio.h>
/**
 * get_bit - get value of a bit at a given index
 * @n: number to find bit
 * @index: where to get the bit
 * Return: bit value or -1 if it fails
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
	{
		return (-1);
	}
	if (n != 0)
	{
		n = (n >> index) & 1;
		return (n);
	}
	return (-1);
}
