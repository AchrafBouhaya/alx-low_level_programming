#include "main.h"
<<<<<<< HEAD

/**
 * factorial - gets factorial of n
 * @n: integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

=======
/**
 * factorial - Write a function that returns the factorial of a given number
 * @n:int
 *
 * Return:int
 */
int factorial(int n)
{
	int x;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		x = n * factorial(n - 1);
	}
			return (x);

}
>>>>>>> 127658e12f92f319de84d0029b2e48e06ddcd873
