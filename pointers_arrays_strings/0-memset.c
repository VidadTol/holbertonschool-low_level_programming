#include"main.h"
/**
 * _memset -  function that fills memory with a constant byte
 * @s: pointer
 * @b: char
 * @n: The number of bytes to fill
 * Return: Always 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
