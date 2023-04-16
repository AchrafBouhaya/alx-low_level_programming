<<<<<<< HEAD
#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c : The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned,and errno is set appropriatly.
=======
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
>>>>>>> 127658e12f92f319de84d0029b2e48e06ddcd873
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
<<<<<<< HEAD
}	
=======
}
>>>>>>> 127658e12f92f319de84d0029b2e48e06ddcd873
