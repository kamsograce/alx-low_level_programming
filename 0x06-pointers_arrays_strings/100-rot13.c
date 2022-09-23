#include "main.h"

/**
 * rot13 - replaces a letter with the 13th letter
 * after it in the alphabet
 *
 * @str: string to be replaced
 * Return: rot13 replaced string
 */
char *rot13(char *str)
{
	int i = 0, j = 0;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (str[i] != '\0')
	{
		while (j < 52)
		{
			if (str[i] == alphabet[j])
			{
				str[i] = rot13[j];
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (str);
}
