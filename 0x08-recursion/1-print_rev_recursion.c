#include "main.h"

/**
<<<<<<< HEAD
 * _print_rev_recursion - Prints a string in reverse
 * @s: string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

=======
 * _print_rev_recursion - function that prints a string in reverse
 * @x: string
 *
 * Return 0;
*/

void _print_rev_recursion(char *x)
{
	if (*x)
	{
		_print_rev_recursion(x + 1);
		_putchar(*x);
	}
}
>>>>>>> 127658e12f92f319de84d0029b2e48e06ddcd873
