#include "main.h"
/**
<<<<<<< HEAD
 * set_string - function that  sets the value of a pointer to a char.
 *@s: first value -char
 *@to: second value -int
 */
void set_string(char **s, char *to)
{

=======
 * set_string - sets the value of a pointer to a char
 * @s: pointer to change
 * @to: string to change pointer to
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
>>>>>>> 127658e12f92f319de84d0029b2e48e06ddcd873
	*s = to;
}
