#include "main.h"

/**
 * print_most_numbers - print number 0 through 9
 * except 2 and 4, followed by a new line
 */

void print_most_numbers(void)
{
	int character;

	for (character = 48; character <= 57; character++)
	{
		if (character != 50 && character != 52)
			_putchar(character);
	}
	_putchar('\n');
}
