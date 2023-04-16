#include <stdio.h>

/**
<<<<<<< HEAD
 * main - Prints numbers between 00 to 99.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, e, g, h, op1, op2;

i = e = g = h = 48;
while (h < 58)
{
	g = 48;
	while (g < 58)
	{
		e = 48;
		while (e < 58)
		{
			i = 48;
			while (i < 58)
			{
				op1 = (h * 10) + g;
				op2 = (e * 10) + i;
				if (op1 < op2)
				{
					putchar(h);
					putchar(g);
					putchar(' ');
					putchar(e);
					putchar(i);
					if (h == 57 && g == 56 && e == 57 && i == 57)
						break;
					putchar(',');
					putchar(' ');
				}
				i++;
			}
			e++;
		}
		g++;
	}
	h++;
=======
 *main - Prints all possible combinations of two two-digit numbers,
 *        ranging from 0-99, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
int i, j;

for (i = 0; i < 100; i++)
{
for (j = 0; j < 100; j++)
{
if (i < j)
{
putchar((i / 10) + 48);
putchar((i % 10) + 48);
putchar(' ');
putchar((j / 10) + 48);
putchar((j % 10) + 48);
if (i != 98 || j != 99)
{
putchar(',');
putchar(' ');
}
}
}
>>>>>>> 127658e12f92f319de84d0029b2e48e06ddcd873
}
putchar('\n');
return (0);
}
