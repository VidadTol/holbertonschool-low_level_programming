#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1 : 1st character string
 * @s2 : 2st character string
 * Return: 0 Always
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j, l1 = 0, l2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[l1] != '\0')
		l1++;

	while (s2[l2] != '\0')
		l2++;

	str = malloc((l1 + l2 + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l1; i++)
		str[i] = s1[i];

	for (j = 0; j < l2; j++)
		str[l1 + j] = s2[j];

	str[l1 + l2] = '\0';

	return (str);
}
