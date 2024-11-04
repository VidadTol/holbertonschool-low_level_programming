#include"main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: pointer
 * @c: char
 *
 * Return: pointer to the first occurrence of the character c in the string s
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{	
		if (*s == c)
		{
			return (s);
		}
	}
	if (c == '\0')
	{
		return (s);	
	}
		return (NULL); 
}
