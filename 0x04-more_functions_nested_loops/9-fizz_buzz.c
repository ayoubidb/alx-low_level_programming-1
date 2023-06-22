/*
 * File: 9-fizz_buzz.c
 * Author: Abdessamad El Fathi
 */

#include "stdio.h"

/**
 * main - fizz buz program
 *
 *
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (!(i % 3))
			printf("Fizz");

		else if (!(i % 5))
			printf("Buzz");

		else if (!(i % 3) && !(i % 5))
			printf("FizzBuzz");

		else
			printf("%d", i);

		if (i != 100)
			printf(" ");

		else
			printf("\n");
	}

	return (0);
}
