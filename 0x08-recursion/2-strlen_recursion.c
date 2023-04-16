#include "main.h"

/**
<<<<<<< HEAD
 * _strlen_recursion - Returns Length of String
 * @s: string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}

=======
 * _strlen_recursion - function that returns the length of a string
 * @x: this is a string
 *
 * Return:int
 */
int _strlen_recursion(char *x)
{
	int index = 0;

	if (*x)
	{
		index++;
		index += _strlen_recursion(x + 1);

	}
	return (index);
}
>>>>>>> 127658e12f92f319de84d0029b2e48e06ddcd873
