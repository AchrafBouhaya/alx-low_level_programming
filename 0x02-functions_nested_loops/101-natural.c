#include <stdio.h>

/**
<<<<<<< HEAD
 * main - Prints natural numbers below 1024 that are
 * multiplies of 3 or 5
 *
 * Return: Always 0.
 */
int main(void)
{
	int a, b;

	for (a = 1; a < 1024; a++)
	{
		if ((a % 3) == 0 || (a % 5) == 0)
			b += a;
	}
	printf("%d\n", b);
=======
 * main - Prints the sum of all multiples of 3 or 5 up to 1024
 * Return: Always (success)
 */

int main(void)

{
	int i, z = 0;

	while (i < 1024)
	{
	if ((i % 3 == 0) || (i % 5 == 0))
	{
	z += i;
	}
	i++;
	}
	printf("%d\n", z);
>>>>>>> 127658e12f92f319de84d0029b2e48e06ddcd873
	return (0);
}
