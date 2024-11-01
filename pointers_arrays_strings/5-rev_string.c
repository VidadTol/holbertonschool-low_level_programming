#include "main.h"

/**
 * rev_string - that reverses a string
 * @s: string of characters reverses
 * Return: Always 0
 */

void rev_string(char *s)
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
}
