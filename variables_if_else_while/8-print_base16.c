#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 15; num++)

		printf("%x", num);

	printf("\n");

	return (0);
}
