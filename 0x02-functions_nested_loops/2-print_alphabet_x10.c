/*
 * File: 2-print_alphabet_x10.c
 * Author: Abdessamad El Fathi
 */

#include "main.h"

/**
 *print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *                     followed by an new line
 *
 *Return: no return value (void)
 */

void print_alphabet_x10(void)
{
	int i;
	char letter;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);

		_putchar('\n');
	}
}
