/*
 * File: 3-print_numbers.c
 * Author: Abdessamad El Fathi
 */

#include "main.h"

/**
 * print_numbers - a function that prints the numbers, from 0 to 9
 *                 Followed by a new line
 *
 * Return: void
 */

void print_numbers(void)
{
	char n;

	for(n = '0'; n <= '9'; n++)
		_putchar(n);

	_putchar('\n');
}
