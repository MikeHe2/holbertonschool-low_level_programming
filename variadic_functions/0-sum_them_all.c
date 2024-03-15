#include "variadic_functions.h"

/**
 * sum_them_all - Function that returns the sum of all its parameters.
 *
 * @n: Something.
 *
 * Return: If n == 0 return (0) or return (1).
 */


int sum_them_all(const unsigned int n, ...)

{
	va_list nums;
	int suma = 0;
	unsigned int i = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(nums, n);

	for (; i < n; i++)
	{
		suma += va_arg(nums, int);
	}

	va_end(nums);
	return (suma);
}
