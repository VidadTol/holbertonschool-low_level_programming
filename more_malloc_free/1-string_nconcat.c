#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: 1st character string
 * @s2: 2st character string
 * @n: unsigned n
 * Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	int unsigned i, j, l1 = 0, l2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[l1] != '\0')
	{
		l1++;
	}
	while (s2[l2] != '\0')
	{
		l2++;
	}
	if 
		(n >= l2)
		n = l2;

	str = malloc((l1 + n + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l1; i++)
		str[i] = s1[i];

	for (j = 0; j < n; j++)
		str[l1 + j] = s2[j];

	str[l1 + n] = '\0';

	return (str);
}
