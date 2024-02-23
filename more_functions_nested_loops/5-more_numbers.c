#include "main.h"

/**
 * more_numbers - Prints from 0 to 14 ten times.
 */
void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (a = 0; a < 15; a++)
		{
			if (b >= 10)
				_putchar(b / 10 + '0');
			_putchar(b % 10 + '0');
		}
		_putchar('\n');
	}
}
