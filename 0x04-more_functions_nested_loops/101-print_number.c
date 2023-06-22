/*
 * File: 101-print_number.c
 * Author: Abdessamad El Fathi
 */

#include "main.h"

/**
 * print_number - a function that prints an integer.
 * @n: the number to be printed
 *
 * Return: void
 */

void print_number(int n)
{
	int divisor;

	divisor = 1;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	while (num / divisor >= 10)
		divisor *= 10;

	while (divisor != 0)
	{
		_putchar((num / divisor) + '0');
		num %= divisor;
		divisor /= 10;
	}
}
