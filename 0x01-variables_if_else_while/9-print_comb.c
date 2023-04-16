#include <stdio.h>
<<<<<<< HEAD

/**
 * main - Prints numbers between 0 to 9 with commas and spaces.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
=======
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
		if (a < 9)
>>>>>>> 127658e12f92f319de84d0029b2e48e06ddcd873
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
