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

	suma = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (argv[a][b] > '9' || argv[a][b] < '0')
			{
				puts("Error");
				return (1);
			}
		}
	}

	for (c = 1; c < argc; c++)
	{
		num = atoi(argv[c]);
		if (num >= 0)
		{
			suma += num;
		}
	}

	printf("%d\n", suma);
	return (0);
}
