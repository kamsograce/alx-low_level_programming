#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: source string
 * Return: encoded string
 */
char *leet(char *str)
{
	int i, j;
	char string_upper[] = {'A', 'E', 'O', 'T', 'L'};
	char string_lower[] = {'a', 'e', 'o', 't', 'l'};
	char digit[] = {'4', '3', '0', '7', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == string_upper[j] || str[i] == string_lower[j])
				str[i] = digit[j];
		}

	}
	return (str);
}
