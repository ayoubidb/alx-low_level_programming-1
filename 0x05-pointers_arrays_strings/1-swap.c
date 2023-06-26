/*
 * File: 1-swap.c
 * Auth : Abdessamad El Fathi
 */

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: first integer to be swaped
 * @b: second integer to be swaped
 *
 * return : void
 */

void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
