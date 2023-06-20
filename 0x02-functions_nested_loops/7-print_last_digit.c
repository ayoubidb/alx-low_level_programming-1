/*
 * File: 7-print_last_digit.c
 * Author: Abdessamad El Fathi
 */

#include "main.h"

/**
 * print_last_digit - rints the last digit of a number.
 * @n: the nymber we want to get its last digit
 *
 *Return: the last digit of the given number
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');
	return (last_digit);
}
