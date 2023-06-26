/*
 * File: 6-puts2.c
 * Auth; Abdessamad El Fathi
 */

#include "main.h"

/**
 * puts2 - a function that prints every other character of a string, starting
 *         with the first character, followed by a new line.
 * @str: the string to be printed
 */

void puts2(char *str)
{
	int index = 0;

	while ( str[index] && str[index] != '\0')
	{
		_putchar(str[index]);
		index += 2;
	}

	_putchar('\n');
}
