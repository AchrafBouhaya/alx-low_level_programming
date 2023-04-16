#include "main.h"

/**
<<<<<<< HEAD
 * print_most_numbers - prints numbers
 * Return:0
 */

void print_most_numbers(void)
{
	char n = 0;

	while (n <= 9)
	{
		if (n != 2 && n != 4)
		{
			_putchar('0' + n);
		}

		n++;
	}
	_putchar('\n');

=======
*print_most_numbers - prints
*
*Return: void
*/

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
	if (!(c == '2' || c == '4'))
	_putchar(c);
	}
	_putchar('\n');
>>>>>>> 127658e12f92f319de84d0029b2e48e06ddcd873
}
