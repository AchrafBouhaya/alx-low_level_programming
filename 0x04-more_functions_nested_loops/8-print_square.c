#include "main.h"

/**
<<<<<<< HEAD
 * print_square - print a square of size using the # character
 *
 * @size: the size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
			_putchar('#');
		_putchar('\n');
	}
=======
 * print_square - prints a square of size size
 * @size: size of the square
 *
 * Return: void
 */


void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < (size); j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

>>>>>>> 127658e12f92f319de84d0029b2e48e06ddcd873
}
