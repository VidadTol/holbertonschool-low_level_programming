#include "main.h"

/**
 * is_number - find prime number
 * @x: int
 * @n: int
 * Return: 0 Always
 */

int is_number(int n, int x)
{
	if (n <= 1)
	{
		return (0);
	}
	if (x * x > n)
		return (1);
	{
		if (n % x == 0)
		{
			return (0);
		}
	}
	return (is_number(n, x + 1));
}
/**
 * is_prime_number - a prime number
 * @n: int
 * Return: 0 Always
 */

int is_prime_number(int n)
{
	return (is_number(n, 2));
}
