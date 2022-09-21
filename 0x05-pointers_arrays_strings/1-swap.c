#include "main.h"

/**
 * swap_int - swaps the value of two integers.
 *
 * @a: First integer
 * @b: Second integer
 */
void swap_int(int *a, int *b)
{
	int c = *a, d = *b;
	*a = d;
	*b = c;
}
