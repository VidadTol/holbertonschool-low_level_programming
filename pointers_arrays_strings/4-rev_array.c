#include"main.h"
/**
 *reverse_array - reverses the content of an array of integers
 *@a: the integer array
 *@n: the number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int temp;
	int x;

	for (x = 0; x < n / 2; x++)
	{
		temp = a[x];
		a[x] = a[n - 1 - x];
		a[n - 1 - x] = temp;
	}
}
