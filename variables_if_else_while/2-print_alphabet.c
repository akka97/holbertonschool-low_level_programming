#include <stdio.h>

/**
 * main - Prints alphabet in lower case
 * Used char only twice
 * Return: Always 0.
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)

		putchar(letter);
	putchar('\n')
	return (0);
}
