#include "main.h"

/**
<<<<<<< HEAD
  * print_number - print numbers chars
  * @n: integer params
  * Return: 0
 **/
=======
 * print_number - print numbers chars
 * @n: integer params
 * Return: 0
 */
>>>>>>> 127658e12f92f319de84d0029b2e48e06ddcd873

void print_number(int n)
{
	unsigned int n1;

	n1 = n;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}

	if (n1 / 10 != 0)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
}
