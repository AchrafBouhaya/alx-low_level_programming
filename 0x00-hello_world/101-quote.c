<<<<<<< HEAD
#include <unistd.h>
=======
#include <stdio.h>
#include <unistd.h>

>>>>>>> 127658e12f92f319de84d0029b2e48e06ddcd873
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
<<<<<<< HEAD
	char str1[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, str1, 59);
=======
	write(2,
	"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
>>>>>>> 127658e12f92f319de84d0029b2e48e06ddcd873
	return (1);
}
