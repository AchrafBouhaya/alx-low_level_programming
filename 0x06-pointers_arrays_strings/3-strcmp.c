#include "main.h"
/**
 * _strcmp - compare string values
 * @s1: input value
 * @s2: input value
 *
<<<<<<< HEAD
 * Return: s1[i] - s2[i]
=======
 * Return: s1[i] -s2[i]
>>>>>>> 127658e12f92f319de84d0029b2e48e06ddcd873
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
<<<<<<< HEAD
	i++;
=======
		i++;
>>>>>>> 127658e12f92f319de84d0029b2e48e06ddcd873
	}
	return (0);
}
