#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer.
 *
 * @array: Array of integers.
 * @size: Size of array.
 * @cmp: Pointer to the function to be used to compare values.
 *
 * Return: int_index returns the index of the first element for which the cmp
 * function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}


