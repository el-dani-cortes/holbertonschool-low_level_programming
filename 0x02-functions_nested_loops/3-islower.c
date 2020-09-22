#include <ctype.h>

/**
 * _islower - check for lowercase character.
 * @c: is a character to be check.
 *
 *Return: 1 if c is lowercase. 0 otherwise.
 */
int _islower(int c)
{
	int r;

	r = islower(c);
	if (r != 0)
	{
		return (1);
	}
	else
	{
		return (r);
	}
}
