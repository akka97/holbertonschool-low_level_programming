#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 * Return: A pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, src_l = 0;

	while (src[i++])
		src_l++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];
	for (i = src l; i < n; i++)
		dest[i] = '\0';
	
	return (dest);
}
