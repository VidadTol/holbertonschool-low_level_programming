#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, and then in uppercase, and new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	for (letter = 'A' ; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
