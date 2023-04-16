#include <stdio.h>
<<<<<<< HEAD

/**
 * main - prints 0 to 100, Prints Fizz if multiples of 3,
 * Buzz if multiples of 5,
 * FizzBuzz if multiples of both 3 & 5
 *
 * Return: void
 */
int main(void)
{
	int x;

	for (x = 1; x < 101; x++)
	{
		if (x % 3 == 0)
			printf("Fizz");
		if (x % 5 == 0)
			printf("Buzz");
		if (x % 3 != 0 && x % 5 != 0)
			printf("%d", x);

		printf("%c", x < 100 ? ' ' : '\n');
	}

=======
#include "main.h"

/**
 * main - entry point
 *
 * Description: prints the numbers 1 - 100 w/
 * Fizz for multiples of 3, Buzz for multiples of 5,
 * and FizzBuzz for multiples of both
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
>>>>>>> 127658e12f92f319de84d0029b2e48e06ddcd873
	return (0);
}
