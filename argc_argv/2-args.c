#include <stdio.h>
#include "main.h"

/**
 * main - Program that prints all arguments it recieves.
 * @argc: Number of arguments.
 * @argv: The value of arguments.
 *
 * Return: return 0.
 */

int main(int argc, char *argv[])

{
	int a = 0;

	for (; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);
}
