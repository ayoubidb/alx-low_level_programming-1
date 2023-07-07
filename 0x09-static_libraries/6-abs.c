/*
 * File 6-abs.c
 * Author: Abdessamad El Fathi
 */

#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @n: the number we want to calculate its absolyte value
 *
 * Return: the absolute value of the number
 */

int _abs(int n)
{
	if (n < 0)
		return (n * (-1));

	return (n);
}
