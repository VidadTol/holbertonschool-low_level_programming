#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all -  prints anything
 * @format: A string of characters representing the argument types
 */

void print_all(const char * const format, ...)
{
	va_list args;

	what_format form_types[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_char_ptr},
		{'\0', NULL}
	};

	int i = 0;
	int j = 0;
	char *separator = "";

	va_start(args, format);

	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *form_types[j].type)
			{
				form_types[j].f(separator, args);
				separator = ", ";
			}
		j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
/**
 * print_char - prints a character of type char
 * @args: a list of variadic arguments
 * @separator: the character separator
 * return: 0;
 */

void print_char(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}

/**
 * print_integer - prints a character of type entier
 * @args: a list of variadic arguments
 * @separator: the character separator
 * return: 0;
 */

void print_integer(char *separator, va_list args)
{
	printf("%s%i", separator, va_arg(args, int));
}

/**
 * print_float - prints a character of type float
 * @args: a list of variadic arguments
 * @separator: the character separator
 * return: 0;
 */

void print_float(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}

/**
 * print_char_ptr - prints a character of type char
 * @args: a list of variadic arguments
 * @separator: the character separator
 * return: 0;
 */

void print_char_ptr(char *separator, va_list args)
{
	char *arg = va_arg(args, char*);

	if (arg == NULL)
	{
		printf("%s%s", separator, ("nil"));
		return;
	}
	printf("%s%s", separator, arg);
}
