#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct format_types - defines representing a data type
 * @f: the function pointer 
 * @separator: the conversion specifier
 */

typedef struct what_format
{
	char *type;
	void (*f)(char *separator, va_list args);
}what_format;


int _putchar(char c);

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

void print_char(char *separator, va_list args);
void print_integer(char *separator, va_list args);
void print_float(char *separator, va_list args);
void print_char_ptr(char *separator, va_list args);

#endif
