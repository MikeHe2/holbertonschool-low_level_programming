#include "main.h"

/**
 * swap_int - Function that swaps the values of two integers.
 *
 * @a: Pointer's name
 * @b: Pointer's name
 */

void swap_int(int *a, int *b)
{

	int var = *a;

	*a = *b;
	*b = var;

}
