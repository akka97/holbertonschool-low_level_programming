#include "main.h"
/**
* print_most_numbers - print numbers from zero to nine, expect two and four
*
* Return: Zero.
*/
void print_most_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		if (num != 2 && num != 4)
		_putchar(num);
	}

	_putchar('\n');
	return (0);
}
