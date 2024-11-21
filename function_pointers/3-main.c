#include "3-calc.h"

/**
 * main - prints the result of simple operations
 * @argc: the number of arguments
 * @argv: array of pointers
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*oprt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	oprt = get_op_func(argv[2]);

	if (oprt == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[1] == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	result = oprt(num1, num2);
	printf("%d\n", result);

	return (0);
}
