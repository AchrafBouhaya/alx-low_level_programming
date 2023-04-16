#include <stdio.h>

/**
<<<<<<< HEAD
 * main - Prints the add of the Fibonacci numbers
=======
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
>>>>>>> 127658e12f92f319de84d0029b2e48e06ddcd873
 *
 * Return: Always 0.
 */
int main(void)
{
<<<<<<< HEAD
	int c;
	long int n1, n2, fn;

	n1 = 1;
	n2 = 2;
	printf("%ld, %ld", n1, n2);
	for (c = 0; c < 48; c++)
	{
		fn = n1 + n2;
		printf(", %ld", fn);
		n1 = n2;
		n2 = fn;
	}
	printf("\n");
=======
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

>>>>>>> 127658e12f92f319de84d0029b2e48e06ddcd873
	return (0);
}
