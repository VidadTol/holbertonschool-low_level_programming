#include "main.h"

/**
 * _strlen_recursion - that returns the length of  string
 * @s: char
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
		return (_strlen_recursion(s + 1) + 1);
}
