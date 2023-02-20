#include <stdio.h>

/**
 * main - Prints alphabet in lower and upper case
 * Used char only three times
 * Return: Always 0.
 */

int main(void)
{
	char letter = 'a';
	
	while (letter <= 'z');

	{
		if (letter != 'q' || letter != 'e')

		putchar(letter);
		letter++;
	}

	putchar('\n');
	return (0);
}
