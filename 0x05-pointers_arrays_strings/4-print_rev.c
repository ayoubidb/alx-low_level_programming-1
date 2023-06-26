/*
 * File: 4-print_rev.c
 * Auth: Abdessamad El Fathi
 */

#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse,
 *             followed by a new line
 * @s: the string to be reversed
 */

void print_rev(char *s)
{
	int index = _strlen(s) - 1;

	while (index >= 0)
	{
		_putchar(*(s + index));
		index--;
	}

	_putchar('\n');
}
