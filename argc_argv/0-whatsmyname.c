#include <stdio.h>

/**
 * main - prints the name of program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always zero
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
