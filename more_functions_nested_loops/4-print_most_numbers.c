#include "main.h"

/**
 * print_most_numbers -  prints the numbers, from 0 to 9
 * Return 0 Always
 */

void print_most_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
		if (x != 2 && x != 4)
		{
			_putchar(x + '0');
		}
	_putchar('\n');
}
