#include "variadic_functions.h"

/**
 * print_numbers - Function that prints numbers followed by a new line.
 *
 * @separator: A string to be printed between numbers.
 * @n: Number of integersa passed to the function.
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
