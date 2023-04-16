#include "main.h"
<<<<<<< HEAD

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}

=======
/**
 * _puts_recursion - function that prints a string, followed by a new line
 * @x:this this is string to be printed
 * Return:void
 */
void _puts_recursion(char *x)
{
	if (*x)
	{
		_putchar(*x);
		_puts_recursion(x + 1);
	}
	else
	{
		_putchar('\n');
	}

}
>>>>>>> 127658e12f92f319de84d0029b2e48e06ddcd873
