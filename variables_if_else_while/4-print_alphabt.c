#include <stdio.h>
/**
 * main - that prints the alphabet in lowercase, followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		if (letter != 'q' && letter != 'e')
		putchar(letter);
	putchar('\n');
	return (0);
}
