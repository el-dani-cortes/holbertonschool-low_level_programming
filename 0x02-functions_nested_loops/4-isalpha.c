#include <ctype.h>

/**
 * _isalpha - check for alphabet character.
 * @c: alphabet  character.
 *
 * Return: 1 if c is letter, 0 otherwise.
 */
int _isalpha(int c)
{
	int r;

	r = isalpha(c);
	if (r != 0)
	{
		return (1);
	}
	else
	{
		return (r);
	}
}
