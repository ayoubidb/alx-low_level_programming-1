#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print additions of the two diagonals.
 * @a: source matrix
 * @size: size NxN of matrix
 *
 * Return: chessboard.
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0; i <= (size - 1); i++)
	{
		sum1 += *(a + (size + 1) * i);
	}

	for (j = 1; j <= size; j++)
	{
		sum2 += *(a + (size - 1) * j);
	}

	printf("%d, %d\n", sum1, sum2);
}
