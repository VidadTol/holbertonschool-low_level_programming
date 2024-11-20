#include "variadic_functions.h"

/**
 * print_numbers - that prints numbers, followed by a new line
 * @n: the number of integers passed to the function
 * @separator: the string to be printed between numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int num;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
