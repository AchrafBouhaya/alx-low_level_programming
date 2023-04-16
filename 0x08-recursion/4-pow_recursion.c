#include "main.h"

/**
<<<<<<< HEAD
 * _pow_recursion - raises x to the power of y
 * @x: Number Integer
 * @y: Power
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
=======
 * _pow_recursion - function that returns the value of x raised to the power y
 * @x:int
 * @y:int
 *
 * Return:int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
		return (x * _pow_recursion(x, y - 1));

	else
	{
		return (1);
	}
>>>>>>> 127658e12f92f319de84d0029b2e48e06ddcd873
}

