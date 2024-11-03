#include"main.h"
/**
 *_strcmp - compare two strings
 *@s1: first string to compare
 *@s2: second string to compare
 *Retrun: 0 always
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
