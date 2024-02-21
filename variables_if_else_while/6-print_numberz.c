#include <stdio.h>

/**
 * main - Prints all single numbers from 0 without var char var
 * and only using putchar.
 *
 * Return: return 0.
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}

	putchar('\n');

	return (0);
}
