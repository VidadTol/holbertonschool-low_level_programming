#include"main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: the destination chain
 * @src: the source string
 * @n: unsigned
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
