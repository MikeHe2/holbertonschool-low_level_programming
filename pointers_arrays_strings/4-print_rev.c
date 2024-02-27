#include "main.h"

/**
 * print_rev - Function that prints a string, in reverse,
 * followed by a new line.
 *
 * @s: Pointer's name
 */


void print_rev(char *s)

{
	int letras = 0;
	int rev_letras;

	while (s[letras] != '\0')
	{
		letras++;
	}

	for (rev_letras = letras - 1; rev_letras >= 0; rev_letras--)
	{
		_putchar(s[rev_letras]);
	}

	_putchar('\n');

}
