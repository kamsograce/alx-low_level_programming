#include "main.h"
/**
 * print_times_table - of type void, prints n times table
 * @n: stop at n
 *
 * Description: prints n times table, starting from 0
 * Return: returns void
 */
void print_times_table(int n)
{
	int line_counter = 0, multiplier = 0, number = 0, value = 0;

	if (n > 15 || n < 0);

	else if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
	}
	else
	{
		while (value <= ((n * n) - n))
		{
			while (line_counter <=  n)
			{
				value = number * multiplier;
				if (line_counter == 0)
				{
					_putchar(value + '0');
				}
				else
					if (value > 99)
					{
						output_hundred();
					}
					else if (value < 10)
					{
						output_unit();
					}
					else
					{
						output_tens();
					}
				number++;
				line_counter++;
			}
			_putchar('\n');
			line_counter = 0, number = 0, multiplier++;
		}
	}
}
void output_tens(void)
{
	int value;
	_putchar(',');
	_putchar(' ');
	_putchar(' ')
	_putchar((value / 10) + '0');
	_putchar((value % 10) + '0');
}
void output_unit(void)
{
	int value;
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(' ');
	_putchar(value + '0');
}
void output_hundred(void)
{
	int value;
	_putchar(' ');
	_putchar(' ');
	_putchar((value / 100) + '0');
	_putchar((value / 10) % 10 + '0');
	_putchar((value % 10) + '0');
}
