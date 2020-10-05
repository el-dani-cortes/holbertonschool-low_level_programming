#include "holberton.h"

/**
 * _strstr - Function that locates a substring.
 * @hayastack: Pointer to a string.
 * @needle: Pointer to another string.
 *
 * Return: Pointer to where is the strings are equal.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++) 
	{
		for (j = 0; haystack[i] == needle[j] && needle[j] != '\0'; j++)
		{
			i++;
		}
		if (j > 0)
		{
			i -= j;
			if (needle[j] == '\0')
			{
				return(haystack + i);
			}
		}
	}
	return('\0'); 
}


