#include "main.h"

/**
 * _puts -  that prints a string, followed by a new line, to stdout
 * @str: pointer to the string to print
 * Return: Always 0
 */

void _puts(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
