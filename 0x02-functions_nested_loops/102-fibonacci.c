#include <stdio.h>
/**
 * main - prints the first 50 fibonacci numbers
 * @void: void argument
 *
 * Description: prints the numbers, followedbt a new line
 * Return: 0 Always
 */
int main(void)
{
	long int a = 1, b = 2, c;
	int count = 2;

	printf("%lu, ", a);
	printf("%lu", b);
	while (count <= 49)
	{
		printf(", ");
		c = a + b;
		printf("%lu", c);
		a = b;
		b = c;
		count++;
	}
	printf("\n');
	return (0);
}
