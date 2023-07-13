#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of the new array
 *
 * Return: the string initiated
 */

void *malloc_checked(unsigned int b)
{
	void* memLoc;

	memLoc = malloc(b);

	if (memLoc == NULL)
		exit(98);

	return (memLoc);
}
