#include <stdio.h>
/**
 * main - print the sum of even fibonacci numbers < 4,000,000
 * @void: void argument
 *
 * Description: print sum, followed by a new line
 * Return: 0 Always
 */

int main(void)
{
	int a = 1, b = 2, c, sum = 2;

	while (c <= 4000000)
	{
		c = a + b;
		a = b;
		b = c;
		if (c % 2 == 0)
			sum += c;
	}
	printf("%d\n", sum);
	return (0);
}
