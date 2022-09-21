#include "main.h"

/**
 * _strlen - counts the length of a string.
 * @s: string to be counted.
 * Return: the length of the string.
 */
int _strlen(char *s)
{
	int i = 0, count = 0;

	while (s[i] != 0)
	{
		count++;
		i++;
	}

	return (count);
}
