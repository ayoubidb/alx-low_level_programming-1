#include "main.h"

/**
 * _strspn - prints the consecutive caracters of s1 that are in s2.
 * @s: source string
 * @accept: searching string
 *
 * Return: new string.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(accept + i); i++)
	{
		for (j = 0; *(s + j); j++)
			if (*(s + j) == *(accept + i))
				return (++j);
	}

	return (j);
}
