#include "main.h"
<<<<<<< HEAD

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
=======
/**
 * _strlen - return the length of a string
 *  * @s: char to check
 * Description: this will return the length of a string
 * Return: 0 is success
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
>>>>>>> 127658e12f92f319de84d0029b2e48e06ddcd873
}
