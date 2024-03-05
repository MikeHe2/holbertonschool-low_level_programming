#include <stdio.h>

/**
 * main - Program that prints its name, followed by a new line.
 *
 * @argc: Number of arguments.
 * @argv: The value of arguments.
 *
 * Return: retunrs 0.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
