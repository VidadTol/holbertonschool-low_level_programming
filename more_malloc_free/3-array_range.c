#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum range of value
 * @max: maximum range of value
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *array;
	int x, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);

	for (x = 0; min <= max; x++)

		array[x] = min++;

	return (array);
}
