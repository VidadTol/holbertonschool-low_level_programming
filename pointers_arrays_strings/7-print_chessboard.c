#include "main.h"

/**
 * print_chessboard - print a chessboard
 * @a: the 2D table representing the chessboard
 * Return: always 0
 */

void print_chessboard(char (*a)[8])
{
	int z;
	int x;

	for (z = 0; z < 8; z++)
	{
		for (x = 0; x < 8; x++)
		{
			_putchar(a[z][x]);
		}
		_putchar('\n');
	}
}
