#include "main.h"

/**
 * print_line - print the character '_', then a new line.
 * @n: number of times character should be printed
 */

void print_line(int n)
{
	int count = 1;

	if (n <= 0)
		;
	else
	{
		while (count <= n)
		{
			_putchar(95);
			count++;
		}
	}
	_putchar('\n');
}
