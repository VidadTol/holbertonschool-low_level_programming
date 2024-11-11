#include"main.h"

/**
 * create_array - create a character table
 * @size: size of the table to create
 * @c: Character with which to initialize the array
 * Return: 0 Always
 */

char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *a;

	if (size == 0)
	{
		return (NULL);
	}

	a = malloc(sizeof(char) * size);

	if (a == NULL)
	{
		return (NULL);
	}

	for (x  = 0; x < size; x++)
	{
		a[x] = c;
	}

	return (a);
}
