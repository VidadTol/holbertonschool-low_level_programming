#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - execute a function for each element of an array
 * @array: array to iterate
 * @size: size of the array
 * @action: iterator function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
		action(array[i]);
		}
	}
}
