#include "main.h"

/**
<<<<<<< HEAD
 * _isdigit - check for a digit
 * @c : character to check
 * Return:0 or 1
 */

int _isdigit(int c)
{
	return (c >= 48 && c <= 57);

=======
* _isdigit - write a function that check for a digit (0 through 9).
* @c: char to check
* Return:  0 or 1
**/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
>>>>>>> 127658e12f92f319de84d0029b2e48e06ddcd873
}
