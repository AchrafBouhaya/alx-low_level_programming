#include "main.h"

/**
<<<<<<< HEAD
 * print_alphabet - Prints the lowercase alphabets.
 *
 * Return: Always void.
 */
void print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
=======
 * print_alphabet - Make the alphabet
 * Return: void
 */

void print_alphabet(void)

{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
>>>>>>> 127658e12f92f319de84d0029b2e48e06ddcd873
	}
	_putchar('\n');
}
