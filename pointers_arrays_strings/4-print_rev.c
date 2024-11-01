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
	char temp;

	while (s[len] != '\0')
	{
		len++;
	}
	for (x = 0; x < len / 2; x++)
	{
		temp = s[x];
		s[x] = s[len - 1 - x];
		s[len - 1 - x] = temp;
	}
	for (x = 0; x < len; x++)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
