#include <stdio.h>
<<<<<<< HEAD

/**
 * main - Prints numbers between 0 to 9 and letters between a to f.
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
	for (i = 97; i < 103; i++)
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

	int d;

	c = 'a';
	d = 0;
	while
		(d < 10)
		{
			putchar(d + '0');
			d++;
		}
	while
		(c <= 'f')
		{
			putchar(c);
			c++;
		}
>>>>>>> 127658e12f92f319de84d0029b2e48e06ddcd873
	putchar('\n');
	return (0);
}
