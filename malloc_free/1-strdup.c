#include "main.h"

/**
 * _strdup - duplicate a string
 * @str: String to duplicate
 * Return: pointer to a the new duped string
 */

char *_strdup(char *str)
{
	char *a;
	int b, c;

	if (str == NULL)
	{
		return (NULL);
	}

	for (b = 0; str[b] != '\0'; b++)

	a = malloc((b + 1) * sizeof(char));

	if (a == NULL)
	{
		return (NULL);
	}

	for (c = 0; c < b; c++)
	{
		a[c] = str[c];
	}
	a[c] = '\0';

	return (a);
}
