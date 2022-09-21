#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: input string
 */
void puts_half(char *str)
{
	int i, index = str_len(str), start;

	if (index % 2 != 0)
		start = (index / 2) + 1;
	else
		start = index / 2;

	for (i = start; i < index; i++)
		_putchar(str[i]);
	_putchar('\n');
}

/**
 * str_len - counts the number of characters in string
 * @str: input string
 * Return: count of characters
 */
int str_len(char *str)
{
	int index = 0;

	while (str[index] != 0)
		index++;

	return (index);
}
