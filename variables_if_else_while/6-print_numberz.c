#include <stdio.h>

/**
 * main - Prints alphabet in lower and upper case
 * Used char only three times
 * Return: Always 0.
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)

		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
