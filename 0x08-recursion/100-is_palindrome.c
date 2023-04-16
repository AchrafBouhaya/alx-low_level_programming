#include "main.h"

/**
<<<<<<< HEAD
 * palind2 - obtains length of a
 * @a: string
 * @l: integer to count length
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int palind2(char *a, int l)
{
	if (*a == 0)
		return (l - 1);
	return (palind2(a + 1, l + 1));
}
/**
 * palind3 - compares string vs string reverse
 * @a: string
 * @l: length
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int palind3(char *a, int l)
{
	if (*a != *(a + l))
		return (0);
	else if (*a == 0)
		return (1);
	return (palind3(a + 1, l - 2));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to evaluate
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_palindrome(char *s)
{
	int l;

	l = palind2(s, 0);
	return (palind3(s, l));
}

=======
 * _strlen_recursion - function that returns 1 if a string is a palindrome & 0
 * @x: the string to be printed
 *
 * Return: the length of string
 */
int _strlen_recursion(char *x)
{
	if (x[0] != '\0')
		return (1 + _strlen_recursion(x + 1));
	return (0);
}

/**
 * pal_checker - the function check if x is palindrome.
 * @x: the string base address.
 * @i: left index.
 * @j: rigth index.
 *
 * Return: 1 if s is palindrome, 0 otherwise.
 */

int pal_checker(char *x, int i, int j)
{
	if (x[i] == x[j])
		if (i > j / 2)
			return (1);
		else
			return (pal_checker(x, i + 1, j - 1));
	else
		return (0);
}

/**
 * is_palindrome - the function check if x is palindrome
 * @x: base address for string.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_palindrome(char *x)
{
	return (pal_checker(x, 0, _strlen_recursion(x) - 1));
}
>>>>>>> 127658e12f92f319de84d0029b2e48e06ddcd873
