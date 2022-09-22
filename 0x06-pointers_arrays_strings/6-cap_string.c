#include "main.h"

/**
 * cap_string - capitalizes all words of s string
 * @str: string to be changed
 * Return: string in uppercase
 */
char *cap_string(char *str)
{
	int i, j;
	char separators[] = {' ', '\t', '\n', ',', ';', '.', '!',						'?', '"', '(', ')', '{', '}'};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		else
		{
			for (j = 0; j < 14; j++)
				if (str[i] == separators[j])
				{
					if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
						str[i + 1] = str[i + 1] - 32;
				}
		}
	}
	return (str);
}
