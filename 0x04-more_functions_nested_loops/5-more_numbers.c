#include "main.h"

/**
 * more_numbers - print 0-14 ten times
 */

void more_numbers(void)
{
	int count = 1, x;

	while (count <= 10)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x >= 10)
				_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
		}
		count++;
		_putchar('\n');
	}
}
