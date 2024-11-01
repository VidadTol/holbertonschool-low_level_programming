#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @n: the number of elements of the array to be printed
 * @a: Array of integers
 * Return: always 0
 */

void print_array(int *a, int n)
{
	int *ptr = a;
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", *(ptr + x));

		if (x < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
