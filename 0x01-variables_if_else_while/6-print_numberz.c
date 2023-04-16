#include <stdio.h>
<<<<<<< HEAD

/**
 * main - Prints numbers between 0 to 9.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
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
	int c;

	c = 0;
	while
		(c < 10)
		{
			putchar(c + '0');
			c++;
		}
>>>>>>> 127658e12f92f319de84d0029b2e48e06ddcd873
	putchar('\n');
	return (0);
}
