#include "main.h"

/**
 * _puts - Function that prints a string, followed by a new line, to stdout.
 *
 * @str: A string
 *
 * Return: (0)
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}

