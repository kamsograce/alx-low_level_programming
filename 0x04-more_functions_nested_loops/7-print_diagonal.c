#include "main.h"

/**
 * print_diagonal - print
 * @n: number of times character should be printed
 */

void print_diagonal(int n)
{
	int count, counter;

	if (n <= 0)
		_putchar('\n');
	else
	{
		_putchar(92);	/* if n = 1*/
		_putchar('\n');
		for (count = 2; count <= count; counter++)	/* if n > 1*/
		{
			for (counter = 2; counter <= count; counter++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
