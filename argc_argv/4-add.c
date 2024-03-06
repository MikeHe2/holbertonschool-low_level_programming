#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that adds positive numbers
 * @argc: Number of arguments
 * @argv: The value of arguments
 *
 * Return: 0 o 1.
 */

int main(int argc, char *argv[])

{

	int a, b, c, suma, num;


	for (b = 0; b < argc; b++)
	{
		for (c = 0; argv[b][c] != '\0'; c++)
		{
			if (argv[b][c] > '9' || argv[b][c] < '0')
			{
				printf("Error\n");

				return (1);
			}
		}
	}

	for (a = 1; a < argc; a++)
	{
		num = atoi(argv[a]);

		if (num >= 0)
		{
			suma += num;
		}
	}

	printf("%d\n", suma);
	return (0);
}
