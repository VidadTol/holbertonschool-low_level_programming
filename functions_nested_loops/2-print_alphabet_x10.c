#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * Return: void
 */

void print_alphabet_x10(void)
{
	char x;
	int c;

	for (c = 0; c < 10; ++c)
	{
		for (x = 'a'; x <= 'z'; ++x)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
