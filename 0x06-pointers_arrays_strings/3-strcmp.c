#include "main.h"

/**
 * _strcmp - comparing two srings
 *  @s1: first string
 *  @s2: second string
 *  Return: return 0 if s1 and s2 are the same
 *  another number if not
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0, diff = 0;

	while (diff == 0)
	{
		if ((*(s1 + a) == '\0') && (*(s2 + a) == '\0'))
			break;
		diff = *(s1 + a) - *(s2 + a);
		a++;

	}

	return (diff);
}
