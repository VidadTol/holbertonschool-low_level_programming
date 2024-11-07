#include <stdio.h>

/**
 * main - that prints its name
 * @argc: int
 * @argv: char
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s", argv[x]);
	}
	printf("\n");
	return (0);
}
