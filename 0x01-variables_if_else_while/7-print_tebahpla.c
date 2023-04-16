#include <stdio.h>
<<<<<<< HEAD

/**
 * main - Prints reversed alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
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

	c = 'z';
	while
		(c >= 'a')
		{
			putchar(c);
			c--;
		}
>>>>>>> 127658e12f92f319de84d0029b2e48e06ddcd873
	putchar('\n');
	return (0);
}
