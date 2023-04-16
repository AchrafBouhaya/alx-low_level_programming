#include "main.h"
<<<<<<< HEAD
/**
 * print_chessboard - function that prints the chessboard.
 *@a: first value -char
 *
=======

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to pieces to print
 *
 * Return: void
>>>>>>> 127658e12f92f319de84d0029b2e48e06ddcd873
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
<<<<<<< HEAD
			_putchar (a[i][j]);
=======
			_putchar(a[i][j]);
>>>>>>> 127658e12f92f319de84d0029b2e48e06ddcd873
		}
		_putchar('\n');
	}
}
