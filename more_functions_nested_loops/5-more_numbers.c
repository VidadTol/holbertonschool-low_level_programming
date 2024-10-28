#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: 0 Always
 */

void more_numbers(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y > 9)
			{
				_putchar(48 + (y / 10));
			}
		_putchar(48 + (y % 10));
	}
	_putchar('\n');
	}
}
