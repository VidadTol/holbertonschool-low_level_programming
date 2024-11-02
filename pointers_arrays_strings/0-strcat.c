#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: the destination chain
 * @src: The source string to append to the destination string
 * Return:  pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';

	return (dest);
}
