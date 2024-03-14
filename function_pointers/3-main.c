#include "3-calc.h"

/**
 * main - Something.
 *
 * @argc: Arguments count.
 * @argv: Arguments value.
 *
 * Return: retorna 0
 */

int main(int argc, char *argv[])

{
	int num1, num2, result;
	int (*ope)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	ope = get_op_func(argv[2]);
	num2 = atoi(argv[3]);

	if (ope == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = ope(num1, num2);

	printf("%d\n", result);

	return (0);
}
