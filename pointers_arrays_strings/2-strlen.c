#include "main.h"
/**
* _strlen - function to get the length of a string
* @s: string pointer
* Return: return length of a string
*/
int _strlen(char *s)
{
	int len;

	for (; *s != '\0'; s++)
	{
		len += 1;
	}
	return (len);
}
