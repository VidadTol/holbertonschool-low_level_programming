#include "main.h"

/**
 * print_diagsums -  prints the sum of the two diagonals of a square matrix
 * @a: the pointer to the first cell of the matrix
 * @size: the size of the square matrix
 * Return: Always 0
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;
	int z;

	for (z = 0; z < size; z++)
	{
		sum1 += *(a + z * size + z);
		sum2 += *(a + z * size + (size - 1 - z));
	}
	printf("%d, %d\n",sum1, sum2);
}
