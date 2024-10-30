#include "main.h"
/**
 * swap_int - that swaps the values of two integers
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
