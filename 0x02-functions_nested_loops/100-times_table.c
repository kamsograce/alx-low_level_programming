#include "main.h"
/**
 * print_times_table - of type void, prints n times table
 * @n: stop at n
 * Description: prints n times table, starting from 0
 * Return: returns void
 */
void print_times_table(int n)
{
	int x = 0, y, z;

	if (n > 15 || n < 0)
		return;
	while (x <= n)
	{
		for (y = 0; y <= n; y++)
		{
			z = x * y;
			if (z > 99)
			{
				_putchar(z / 100 + '0');
				_putchar((z / 10 % 10) + '0');
				_putchar(z % 10 + '0');
			}
			else if (z > 9)
			{
				_putchar(' ');
				_putchar(z / 10 + '0');
				_putchar(z % 10 + '0');
			}
			else if (y != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(z + '0');
			}
			else
				_putchar(z + '0');

			if (y != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		x++;
	}
}
