#include "main.h"
/**
 * _strlen - return the length of a string
 * @s: counting string
 * Return: string length
 */
int_strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}
