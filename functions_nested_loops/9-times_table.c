#include "main.h"
/**
 * times_table - that prints the 9 times table, starting with 0
 * Return: Always 0
 */

void times_table(void)
{
	int row;
	int col;
	int prod;

	for (row = 0; row <= 9; row++)
	{
		printf("%d", row);
		for (col = 1; col <= 9; col++)
		{
			prod = col * row;
			printf(",");
			if (prod <= 9)
			{
			printf(" ");
			}
			printf("%d", prod);
			}
			printf("\n");
	}
}
