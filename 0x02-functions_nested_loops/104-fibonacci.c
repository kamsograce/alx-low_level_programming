#include <stdio.h>
/*
 * main - type int, print the first '98' fibonacci
 * @void: void argument
 *
 * Description: prints the numbers, followed by a new line
 * Return: 0 Always
 */

int main(void)
{
	long int a = 1, b = 2, c;
	int count = 2;

	printf("%lu, ", a);
	printf("%lu", b);
	while (count <= 95)
	{
		printf(", ");
		c = a + b;
		printf("%lu", c);
		a = b;
		b = c;
		count++;
	}
	printf("\n");
	return (0);
}
