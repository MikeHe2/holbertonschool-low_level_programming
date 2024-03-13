#include "function_pointers.h"

/**
 * void array_iterator(int *array, size_t size, void (*action)(int))
 *
 * @array: Array of integers.
 * @size: Size of the array.
 * @action: A pointer to function.
 */

void array_iterator(int *array, size_t size, void (*action)(int))

{
	unsigned int i = 0;

	if (array || action)
	{
		for (; i < size; i++)
		{
			action(array[i]);
		}
	}
}


