#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including (\0)
 * @dest: the buffer pointed to by dest
 * @src: the string pointed
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *x = dest;

	for (; (*dest = *src) != '\0'; dest++, src++)
	;
	return (x);
}
