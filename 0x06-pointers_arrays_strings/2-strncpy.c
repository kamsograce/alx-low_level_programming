#include "main.h"

/**
 * _strncpy - function copies the string pointed to by src,
 * including the terminating null byte ('\0'),
 * to the buffer pointed to by dest.
 *
 * @dest: buffer
 * @src: source string
 * @n limit of bytes of src to be cpied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int 1 = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
