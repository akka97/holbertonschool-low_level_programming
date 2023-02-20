#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a random number and states whether
 * it is grater than five, less than six and not 0.
 * Return: Always 0.
 */
int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",
				n, n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) !=0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
				n , n% 10);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not\n",
				n, n % 10);
		printf("%d is positive\n", n);

	return (0);
}
