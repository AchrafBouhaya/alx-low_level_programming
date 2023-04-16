#include "main.h"

/**
<<<<<<< HEAD
 * print_numbers - prints from 0 to 9 characters
 *
 * Return: void
 */
void print_numbers(void)
{
	char x;

	for (x = '0'; x <= '9'; x++)
		_putchar(x);
=======
*print_numbers - print 0123456789
*
*Return: void
*/

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
	_putchar(c);
	}
>>>>>>> 127658e12f92f319de84d0029b2e48e06ddcd873
	_putchar('\n');
}
