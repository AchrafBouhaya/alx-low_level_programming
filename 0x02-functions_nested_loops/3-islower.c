#include "main.h"

/**
<<<<<<< HEAD
 * _islower - Shows 1 if the input is a
 * lowercase character. Another cases, shows
 * 0
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for lowercase character. 0 for the rest.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
=======
 * _islower - Checks for lowercase character
 * @c: The character to be checked
 * Return: 1 for lowercase character or 0 for anything else
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{

	return (1);
	}
	return (0);
>>>>>>> 127658e12f92f319de84d0029b2e48e06ddcd873
}
