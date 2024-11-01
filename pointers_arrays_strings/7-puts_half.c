#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the string to print
 * Retunr: always 0
 */

void puts_half(char *str)
{
	int len = 0;
	char *ptr = str;

	while (*ptr != '\0')
	{
		len++;
		ptr++;
	}
	ptr = str;

	if (len % 2 == 0)
	{
		ptr += len / 2;
	}
	else
	{
		ptr += (len - 1) / 2 + 1;
	}
	while (*ptr != '\0')
	{
		_putchar(*ptr);
		ptr++;
	}

	_putchar('\n');
}
