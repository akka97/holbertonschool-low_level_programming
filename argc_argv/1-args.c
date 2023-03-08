#include <stdio.h>

/**
 * main - print the number of argument passed
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always zero
 */

int main(int argc, char *argv[])
{
(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
