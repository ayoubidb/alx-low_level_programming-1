/*
 * File : 2-strlen.c
 * Auth: Abdessamad El Fathi
 */

/**
 * _strlen -  a function that returns the length of a string.
 * @s : the string to be count its length
 *
 * Return : the length of the given string @s
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
