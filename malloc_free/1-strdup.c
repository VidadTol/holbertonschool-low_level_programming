#include "main.h"

/**
 * _strdup - duplicate a string
 * @str: String to duplicate
 * Return: pointer to a the new duped string
 */

char *_strdup(char *str)
{
	char *a;
	int b = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[b] != '\0')
	{
		b++;
	}
	a = malloc((b + 1) * sizeof(char));

	if (a == NULL)
	{
		return (NULL);
	}

	for (b = 0; str[b] != '\0'; b++)
	{
		a[b] = str[b];
	}
	a[b] = '\0';

	return (a);
}
