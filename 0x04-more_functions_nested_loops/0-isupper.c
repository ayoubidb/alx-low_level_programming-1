/*
 * File: 0-isupper.c
 * Author: Abdessamad El Fathi
 */

/**
 * _isupper - a function that checks for uppercase character.
 * @c: the character to be checked
 *
 * Return: 1 if c is uppercase
 *         0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
