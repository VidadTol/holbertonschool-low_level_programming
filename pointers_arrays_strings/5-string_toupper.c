#include"main.h"
/**
 *string_toupper - Changes all lowercase letters in a string to uppercase.
 *@str: The string to convert
 *return: a pointer to the converted string.
 */
char *string_toupper(char *str)
{
	char *ptr = ptr;

	if (str == NULL)
	{
		return NULL;
	}

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 32;
		}
		ptr++;
	}
	return (str);
}
