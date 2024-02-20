#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - more headers goes there
 *
 * Return: betty style doc for function main goes there
 */

int main(void)
{
	int n; LASTD

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	LASTD = n % 10

	if (LASTD > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, LASTD);
	}
	else if (LASTD == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, LASTD);
	}
	else if (LASTD < 6 && LASTD != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, LASTD);
	}

	return (0);
}
