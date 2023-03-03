#include "main.h"
/**
 * _memset - fill the block of memory with a specific value
 * @s: starting addres of memory to be filled
 * @b: the desired value
 * @n: numberof bytes to be changed
 * Return: Changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);

}
