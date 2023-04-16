#include "main.h"

/**
<<<<<<< HEAD
* print_triangle - prints a triangle line with hashtags
* @size: an int given by main
* Same as my 7 print diagonal. check that file and its comments
* Description: Uses headers to link and a nested loops to achieve goal
* can do one nested for instead of two. do a if j to i equality check
* Return: void. no return.
*/

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (j = size - i - 1; j > 0; j--)
			_putchar(' ');
		for (j = i + 1; j > 0; j--)
			_putchar('#');
		_putchar('\n');
	}
=======
 * print_triangle - entry point
 *
 * Description: Prints diagonals
 *@size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int row, hashes, spaces;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (spaces = size - row; spaces >= 1; spaces--)
			{
				_putchar(' ');
			}
			for (hashes = 1; hashes <= row; hashes++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
>>>>>>> 127658e12f92f319de84d0029b2e48e06ddcd873
}
