#include "main.h"
/**
 * print_alphabet - that prints the alphabet, in lowercase
 * Return: void
 */

void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; ++x)
	{
		_putchar(x);
	}
	_putchar('\n');
}
