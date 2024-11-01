#include "main.h"

/**
 * print_rev - that prints a string, in reverse
 * @s: string of characters whose length we want to measure
 * Return: Always 0
 */

void print_rev(char *s)
{
	int x;
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	for (x = len - 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
