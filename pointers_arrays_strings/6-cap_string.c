#include"main.h"
/**
 * cap_string - Capitalize all words of a string.
 * @str: The string to be modified.
 * Return: A pointer to the resulting string
 */

char *cap_string(char *str)
{
	char *ptr = str;
	int cap = 1;

	while (*ptr != '\0')
	{
		if (cap && (*ptr >= 'a' && *ptr <= 'z'))
		{
			*ptr = *ptr - 32;
		}
		if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' ||
				*ptr == ',' || *ptr == ';' || *ptr == '.' ||
				*ptr == '!' || *ptr == '?' || *ptr == '"' ||
				*ptr == '(' || *ptr == ')' || *ptr == '{' ||
				*ptr == '}')
		{
			cap = 1;
		}
		else
		{
			cap = 0;
		}
		ptr++;
	}
	return (str);
}
