#include <stdio.h>
<<<<<<< HEAD

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
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
			putchar(c);
			c++;
		}
>>>>>>> 127658e12f92f319de84d0029b2e48e06ddcd873
	putchar('\n');
	return (0);
}
