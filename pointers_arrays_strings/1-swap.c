#include "main.h"
/**
 * swap_int - that swaps the values of two integers
 * @a: argument
 * @b: argument
 * @temp: temporary
 *Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
