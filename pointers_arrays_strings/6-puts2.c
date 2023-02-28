#include "main.h"
/**
* puts2 - function
* @str: parameter
*/
void puts2(char *str)
{
	int i;
	int n;

	while (str[n] != '\0')
	{
		n++;
	}

	for (i = 0; i < n; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
