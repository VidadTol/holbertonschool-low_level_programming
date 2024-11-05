#include"main.h"
/**
 * _strpbrk - that searches a string for any of a set of bytes
 * @s: the string to search for
 * @accept: the string containing the characters to search for
 * Return: pointer to the byte in s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i]; s++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
