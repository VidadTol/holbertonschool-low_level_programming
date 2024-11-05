#include"main.h"
/**
 * _strspn - that gets the length of a prefix substring
 * @s: char
 * @accept: pointer
 * Return: the number of bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int a;
	int k;

	for (i = 0; s[i] != '\0' && s[i] != ' '; i++)
	{
		for (a = 0; accept[a] != '\0'; a++)
		{
			if (s[i] == accept[a])
			{
				k++;
			}
		}
	}
	return (k);
}
