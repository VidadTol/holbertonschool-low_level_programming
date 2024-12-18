#include "main.h"
/**
 * times_table - that prints the 9 times table, starting with 0
 * Return: Always 0
 */

void times_table(void)
{
	int row;
	int col;
	int prod;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');

		for (col = 1; col <= 9; col++)
		{
			_putchar(',');
			_putchar(' ');

			prod = col * row;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');
			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
