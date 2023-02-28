#include "main.h"
/**
* swap_int - given two integers swap the values they are holding
* @a: parameter one
* @b: parameter two
*/
void swap_int(int *a, int *b)
{
	int num;

	num = *a;
	*a = *b;
	*b = num;
}
