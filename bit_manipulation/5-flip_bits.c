#include "main.h"
#include <stdio.h>
/**
 * flip_bits - function that returns the numbers of bits that needed
 * to flip to get from one number to another
 * @n: number
 * @m: number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;
	unsigned long int x = n	^ m;

	while (x)
	{
		count += (x & 1);
		x >>= 1;
	}
	return (count);
}
