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
	strncat(dest, src, n);
	return (dest);
}
