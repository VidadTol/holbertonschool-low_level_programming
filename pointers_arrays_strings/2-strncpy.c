#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: The destination string
 * @src: The source string to copy
 * @n: The maximum number of bytes to copy from the source
 * Return: A pointer to the destination string (dest)
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (n > 0 && *src != '\0')
	{
		*ptr++ = *src++;
		n--;
	}
	while (n > 0)
	{
		*ptr++ = '\0';
		n--;
	}
	return (dest);
}
