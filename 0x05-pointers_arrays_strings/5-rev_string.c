#include "main.h"

/**
 * rev_string - prints a string in reverse, followed by a new line.
 * @s: input string.
 */
void rev_string(char *s)
{
	char rev_str[1000] = {0}; /*Making an array for the reverse str*/
	char s_copy[1000];       /*Making a copy of array s*/
	int i = 0, j, k, index;

	while (s[i] = s[i];    	/*Finding the no of non-zero element*/
	{
		s_copy[i] = s[i];	/*duplicating char s**/
		i++;
	}

	index = i - 1;
	for (j = index, k = 0; j >= 0; j--, k++)
	{
		rev_str[k] = s_copy[j];
		*(s + k) = rev_str[k];
	}
}
