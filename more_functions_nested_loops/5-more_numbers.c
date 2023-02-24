#include "main.h"
/**
* more_numbers - printing more numbers
*
*
*/
void more_numbers(void)
{
	int x, y, fn, sn;

	for (x = 0; x < 10; x++)

	{
		for (y = 0; y < 15; y++)
		{
			fn = y / 10;
			sn = y % 10;
			if (y >= 10)
				_putchar(fn + '0');
			_putchar(sn + '0');
		}
		_putchar('\n');
	}
}
