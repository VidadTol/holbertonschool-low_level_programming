#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: argument
 * Return: 0 Always otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
