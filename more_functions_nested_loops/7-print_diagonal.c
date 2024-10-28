#include "main.h"
/**
 * print_diagonal - that draws a diagonal line on the terminal
 * @n: argument
 * _putchar: fonction to print
 */

void print_diagonal(int n)
{
	int x = 0;
	int y;

	while (x < n)
	{
		y = 0;
		while (y < x)
		{
			_putchar(' ');
			y++;
		}
		 _putchar('\\');
		 _putchar('\n');
		 x++;
	}
}
