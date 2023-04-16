#include "main.h"

/**
<<<<<<< HEAD
 * wildcmp - compares two strings and returns 1 if the strings
 * can be considered identical, otherwise return 0.
 * @s1: string to compare to
 * @s2: string with wild character
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	if (*s2 == '*')
	{
		if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
			return (0);
		if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
			return (1);
	}

	return (0);
}

=======
 * str_checker - a function which compares if two strings are identical.
 * @x1: this is string_1 base address.
 * @x2: this is string_2 base address.
 * @i: left index.
 * @j: special index. (joker)
 *
 * Return: 1 if s is palindrome, 0 otherwise.
 */
int str_checker(char *x1, char *x2, int i, int j)
{
	if (x1[i] == '\0' && x2[j] == '\0')
		return (1);
	if (x1[i] == x2[j])
		return (str_checker(x1, x2, i + 1, j + 1));
	if (x1[i] == '\0' && x2[j] == '*')
		return (str_checker(x1, x2, i, j + 1));
	if (x2[j] == '*')
		return (str_checker(x1, x2, i + 1, j) || str_checker(x1, x2, i, j + 1));
	return (0);
}

/**
 * wildcmp - write a function compare if strings could be considered identical
 * @x1: this is a base address for string.
 * @x2: this is a base address for string.
 *
 * Return: 1 if are considered identical.
 */
int wildcmp(char *x1, char *x2)
{
	return (str_checker(x1, x2, 0, 0));
}
>>>>>>> 127658e12f92f319de84d0029b2e48e06ddcd873
