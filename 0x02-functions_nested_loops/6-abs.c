#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @x: an integer
 *
 * Description: computes the absolute value
 * Return: Always 0.
 */
int _abs(int x)
{
	if (x >= 0)
		return (x);
	else
		return (x * -1);
}
