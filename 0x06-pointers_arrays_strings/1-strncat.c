#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
<<<<<<< HEAD
	dest[i] = src[j];
	i++;
	j++;
=======
		dest[i] = src[j];
		i++;
		j++;
>>>>>>> 127658e12f92f319de84d0029b2e48e06ddcd873
	}
	dest[i] = '\0';
	return (dest);
}
