#include "main.h"
/**
* _strlen - function to get the length of a string
* @s: string pointer
* Return: return length of a string
*/
int _strlen(char *s)
{
	int i = 0;

	for (; *s != '\0'; i++)
	{
		i++;
	}
	return (i);
}
