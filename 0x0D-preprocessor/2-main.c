#include <stdio.h>

/**
 * main - Prints the name of the file it was compile from.
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
