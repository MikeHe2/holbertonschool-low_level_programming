#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase.
 */

void print_alphabet_x10(void)
{
	char letter;
	int a = 0;


	while (a <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}

		_putchar('\n');

		a++;
	}
}

