#include "variadic_functions.h"

/**
 * print_strings - Print strings foloowed by a new line.
 *
 * @separator: A string to be printed between numbers.
 * @n: Number of integers passed to the function.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int i;
	char *ptr;

	va_start(string, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(string, char *);
		if (ptr == NULL)
			printf("(nil)");
		else
		{
			printf("%s", ptr);
			if (i < n - 1 && separator != NULL)
				printf("%s", separator);
		}
	}
	va_end(string);
	printf("\n");
}
