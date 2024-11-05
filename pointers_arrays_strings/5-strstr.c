#include "main.h"
/**
 * _strstr - that locates a substring
 * @haystack: the main string to scan
 * @needle: the substring to locate
 * Return: a pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int x, y;

	for (x = 0; haystack[x] != '\0'; x++)
	{
		for (y = 0; needle[y] != '\0'; y++)
		{
			if (haystack[x + y] != needle[y])
			{
				break;
			}
		}
		if (needle[y] == '\0')
		{
			return &haystack[x];
		}
	}
	return (0);
}
