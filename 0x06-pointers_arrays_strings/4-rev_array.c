#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 */
void reverse_array(int *a, int n)
{
	int a_copy[1000], i, j;

	for (i = 0; i < n; i++)
	{
		a_copy[i] = a[i];
	}
	for (i = n - 1, j = 0; i >= 0; i--, j++)
	{
		a[j] = a_copy[i];
	}
}
