#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: String of characters whose length we want to measure
 * Return: Always 0
 */

int _strlen(char *s)
{
	int l;
	{
		l = 0;

		while (s[l] != '\0')
			l++;
	}
	return(l);
}
