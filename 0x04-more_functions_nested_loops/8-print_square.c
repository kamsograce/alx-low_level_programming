#include "main.h"

/**
 * print_square - print a square.
 * @size: size of the square
 */

void print_square(int size)
{
	int count, counter;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (count = 1; count <= size; count++)
		{
			for (counter = 1; counter <= size; counter++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
