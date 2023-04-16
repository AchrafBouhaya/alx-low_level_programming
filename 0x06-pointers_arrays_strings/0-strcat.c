#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
<<<<<<< HEAD
		dest[i] = src[j];
		i++;
		j++;
	}

=======
	dest[i] = src[j];
	i++;
	j++;
	}
>>>>>>> 127658e12f92f319de84d0029b2e48e06ddcd873
	dest[i] = '\0';
	return (dest);
}
