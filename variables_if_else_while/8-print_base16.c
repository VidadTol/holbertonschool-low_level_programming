#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 0; c < 10; c++)
	{
		putchar(c + '0');
	}
	for (c = 97; c < 103; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}