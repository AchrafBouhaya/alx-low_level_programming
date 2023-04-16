#include "main.h"

/**
<<<<<<< HEAD
 * _abs - Computes the absolute value
 * of an integer.
 *
 * @i: input number as an integer.
 *
 * Return: absolute value
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
=======
 * _abs - Computes the absolute value of an integer.
 * @c: The number to be computed.
 * Return: Absolute value of number or zero
 */

int _abs(int c)
{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
>>>>>>> 127658e12f92f319de84d0029b2e48e06ddcd873
}
