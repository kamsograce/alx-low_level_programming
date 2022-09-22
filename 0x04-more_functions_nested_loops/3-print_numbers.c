#include "main.h"

/**
 * print_numbers - prints numbers 0 t0 9
 * followed by a new line
 */

void print_numbers(void)
{
	int character;

	for (character = 48; character <= 57; character++)
		_putchar(character);
	_putchar('\n');
}
