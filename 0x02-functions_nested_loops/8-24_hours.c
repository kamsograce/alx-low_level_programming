#include "main.h"
/**
 * jack_bauer - displays time
 * @avoid: no argument to be passed
 *
 * Description: prints time from "00:00" to "23:59"
 * Return: 0 Always
 */
void jack_bauer(void)
{
	int second = 0, w = 0, x = 0, y = 0, z = 0;

	while (second < 1440)
	{
		_putchar(w + '0');
		_putchar(x + '0');
		_puychar(':');
		_putchar(y + '0');
		_putchar(z + '0');
		_putchar('\n');

		z++;
		if (z > 9)
		{
			y++;
			z = 0;
		}
		if (y > 5)
		{
			x++;
			y = 0;
		}
		if (x > 9)
		{
			w++;
			x = 0;
		}
			second++;
		}
}
