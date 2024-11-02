#include "main.h"

/**
 * _strncat - concatenates two strings
 *@dest: The destination string
 *@src: The source string to append to the destination string
 * @n: The maximum number of bytes to use from the source
 * Return: A pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
		ptr++;

	while (n-- && (*src))
	{
		*ptr++ = *src++;
	}

	*ptr = '\0';

	return (dest);
}
