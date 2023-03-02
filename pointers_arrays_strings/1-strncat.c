#include "main.h"
/**
 * _strncat - function to append some char
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 * Return: A string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0' && i < n)
	{	*ptr++ = *src++;
		i++;
	}

	return (dest);
}
