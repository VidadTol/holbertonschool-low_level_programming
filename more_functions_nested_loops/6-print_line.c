#include "main.h"

/**
 * print_line -  that draws a straight line in the terminal
 * @n: argument
 * Return: 0 Always (Success)
 */

void print_line(int n)
{
	int x = 0;

	while (x < n)
	{
		_putchar('_');
		x++;
	}
	_putchar('\n');
}
