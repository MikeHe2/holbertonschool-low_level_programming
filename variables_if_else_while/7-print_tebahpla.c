#include <stdio.h>

/**
 * main - Prints the alphabet in reverse.
 *
 * Return: return 0
 */

int main(void)
{
	char alpha;

		for (alpha = 'z'; alpha >= 'a'; alpha--)
		{
			putchar(alpha);
		}

		putchar('\n');

		return (0);
}
