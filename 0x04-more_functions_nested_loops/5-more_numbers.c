/*
 * File: 5-more_numbers.c
 * Author: Abdessamad El Fathi
 */

#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 *                followed by a new line
 *
 * Return: void
 */

void more_numbers(void)
{
	int n;
	int count;

	count = 0;

	while (count < 10)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
				_putchar('1');

			_putchar(n % 10 + '0');
		}

		_putchar('\n');

		count++;
	}
}
