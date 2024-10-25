#include "main.h"
/**
 * _islower - that checks for lowercase character
 * @c: argument c
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
