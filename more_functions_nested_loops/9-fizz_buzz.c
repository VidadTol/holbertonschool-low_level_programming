#include <stdio.h>

/**
 * main - that prints the numbers from 1 to 100
 * Return: 0 Always
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (x % 3 == 0 && x % 5 != 0)
		{
			printf("Fizz ");
		}
		else if (x % 5 == 0 && x % 3 != 0)
		{
			if (x == 100)
			{
				printf("Buzz");
			}
			else
			{
				printf("Buzz ");
			}
		}
		else
			printf("%d ", x);
	}
	putchar('\n');
	return (0);
}
