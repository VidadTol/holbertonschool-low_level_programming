#include "main.h"

/**
 * _isdigit -  checks for a digit (0 through 9)
 * @c: argument
 * Return: 0 Always otherwise
 */

int _isdigit(int c)
{
	if (c >= 49 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
