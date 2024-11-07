#include "main.h"

/**
 * _sqrtflo - other function to find square root
 * @n: The number for which we are looking for the square root
 * @k: number that can be the square root
 * Return: square root of n
 */

int _sqrtflo(int n, int k)
{
	if (k * k == n)
	{
		return (k);
	}
	if (k * k > n)
	{
		return (-1);
	}
	return (_sqrtflo(n, k + 1));
}
/**
 * _sqrt_recursion - that returns the natural square root of a number
 * @n: The number for which we are looking for the square root.
 * Return: the natural square root of `n`
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrtflo(n, 0));
}
