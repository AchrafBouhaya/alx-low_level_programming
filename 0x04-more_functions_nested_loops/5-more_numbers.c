#include "main.h"

/**
<<<<<<< HEAD
 * more_numbers - prints more numbers
 * Return:void
=======
 * more_numbers - nmbr fct
 * Engrfikki file
 * Return: no return
>>>>>>> 127658e12f92f319de84d0029b2e48e06ddcd873
 */

void more_numbers(void)
{
<<<<<<< HEAD
	char n, c;
	int i = 0;


	while (i < 10)
	{
		for (n = 0; n <= 14; n++)
		{
			c = n;
			if (n > 9)
			{
				_putchar('1');
				c = n % 10;
			}

			_putchar('0' + c);
		}

		_putchar('\n');
		i++;
	}

=======

int i, j;
	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			_putchar('1');
			_putchar(j % 10 + '0');
		}
			_putchar('\n');
		}
>>>>>>> 127658e12f92f319de84d0029b2e48e06ddcd873
}
