#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - that searches for an integer
 * @size: size of array
 * @array: array to search
 * @cmp: iterator function
 * Return: int or - 1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		return (i);
	}
	return (-1);
}
