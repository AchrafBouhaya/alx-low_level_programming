#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
<<<<<<< HEAD
 *
 * Return: Always 0 (Success)
=======
 * Return: Always 0 (success)
>>>>>>> 127658e12f92f319de84d0029b2e48e06ddcd873
 */
int main(void)
{
	int pass[100];
	int i, sum, n;

<<<<<<< HEAD
	sum = 0;	
=======
	sum = 0;
>>>>>>> 127658e12f92f319de84d0029b2e48e06ddcd873

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pass[i] = rand() % 78;
		sum += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}
<<<<<<< HEAD

=======
>>>>>>> 127658e12f92f319de84d0029b2e48e06ddcd873
	return (0);
}
