#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that multiplies two numbers.
 * @argc: Numbers of arguments.
 * @argv: The value of arguments.
 *
 * Return: return (1) if more numbers than 3, (0) if two numbers.
 */

int main(int argc, char *argv[])

{
	int num1, num2, resul;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		resul = num1 * num2;
	
		printf("%d\n", resul);

		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
