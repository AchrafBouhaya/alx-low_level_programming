#include "main.h"
<<<<<<< HEAD
/**
 * _memcpy - function that copies memory area
 *@dest: the address of memory to print
 *@src: second value
 *@n: thirth value
 *
 * Return: char with result of memset
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
=======

/**
 * _memcpy - function copies @n bytes from memory area @src
 * to memory area @dest
 *
 * @n: function copies
 *
 * @src: bytes from memory area
 *
 * @dest: to memory area
 *
 * Return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

>>>>>>> 127658e12f92f319de84d0029b2e48e06ddcd873
	return (dest);
}
