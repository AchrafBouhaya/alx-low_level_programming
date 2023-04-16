#include "main.h"
#include <stdio.h>

/**
<<<<<<< HEAD
 * main - check the code for Holberton School students.
=======
 * main - check the code
>>>>>>> 127658e12f92f319de84d0029b2e48e06ddcd873
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strpbrk(s, f);
    printf("%s\n", t);
    return (0);
}
