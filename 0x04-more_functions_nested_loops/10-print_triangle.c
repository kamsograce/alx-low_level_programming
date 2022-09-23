#include "main.h"

/**
 * print_triangle - print triangle with equal height abd width
 * @size: the specification of height and width
 */

void print_triangle(int size)
{
	int i, j, k;
	/*
	 * i stands for the line number
	 * j stands for the start j of space/# for loops
	 * k is used to determine the number of spaces
	 */
	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			k = size - i;
			for (j = 0; j < k; j++)	/*to print spaces*/
			{
				_putchar(32);
			}
			for (j = 0; j < i; j++)	/*to print #*/
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
