#include "main.h"
/**
 * print_diagonal - that draws a diagonal line on the terminal
 * @n: argument
 * _putchar: fonction to print
 * Return 0 Always
 */

void print_diagonal(int n)
{
	int x, y;

	if (x <= n)
	{
		_putchar('\n');
		return;
	}
	else
	{	
		for (x = 0; x < n; x++)
		{
			for (y = 0; y <= x; y++)
			{
				if (y == x)
					_putchar('\\');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
