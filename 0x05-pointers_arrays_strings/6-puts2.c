#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting ith the first character, followed by a new line.
 *
 * @str: input string
 */
void puts2(char *str)
{
	int i, index = str_len(str);

	for (i = 0; i < index; i += 2)
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

	while ( str[index] != 0)
		index++;

	return (index);
}
