#include "main.h"

/**
 * print_rev - that prints a string, in reverse
 * @s: string of characters whose length we want to measure
 * Return: Always 0
 */

void print_rev(char *s)
{
	char *end = s;

	while (*end != '\0')
	{
		end++;
	}
	end--;

	while (end >= s)
	{
		_putchar(*end);
		end--;
	}
	_putchar('\n');
}
