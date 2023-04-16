#include <stdio.h>
<<<<<<< HEAD
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints the alphabet without q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
=======
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char c;

	c = 'a';
	while
		(c <= 'z')
		{
			if ((c != 'q' && c != 'e') && c <= 'z')
				putchar(c);
			c++;
		}
>>>>>>> 127658e12f92f319de84d0029b2e48e06ddcd873
	putchar('\n');
	return (0);
}
