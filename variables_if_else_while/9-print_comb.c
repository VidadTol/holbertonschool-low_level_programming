#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 * Return: 0 Always (Success)
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');
		if (x < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar(10);

	return (0);
}
