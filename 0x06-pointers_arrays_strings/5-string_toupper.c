#include "main.h"
/**
<<<<<<< HEAD
 * string_toupper - change all lowercase to uppercase
=======
 * string_toupper - change all lowercaseto uppercase
>>>>>>> 127658e12f92f319de84d0029b2e48e06ddcd873
 * @n: pointer
 *
 * Return: n
 */
char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
