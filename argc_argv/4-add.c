#include <stdio.h>
#include <stdlib.h>

/**
 * main - positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int x, k;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (x = 1; x < argc; x++)
	{
		for (k = 0; argv[x][k] != '\0'; k++)
		{
			if (argv[x][k] < '0' || argv[x][k] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[x]);
	}
	printf("%d\n", sum);
	return (0);
}
