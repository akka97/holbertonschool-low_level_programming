#include "main.h"
/**
* print_numbers - print numbers from zero to nine
*
* Return: Zero.
*/
void print_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
		_putchar(num + '0');

	_putchar('\n');
}
