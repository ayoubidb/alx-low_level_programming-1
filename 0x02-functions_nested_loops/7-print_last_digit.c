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
	n *= n < 0 ? -1 : 1;
	n %= 10;
	_putchar(n + '0');
	return (n);
}
