#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: input pointer.
 * @size: size of the matrix
 * Return: no return.
 */

void print_diagsums(int *a, int size)
{
	int tmp, sum1 = 0, sum2 = 0;

	for (tmp = 0; tmp < (size * size); tmp++)
	{
		if (tmp % (size + 1) == 0)
			sum1 += *(a + tmp);
		if (tmp % (size - 1) == 0 && tmp != 0 && tmp < size * size - 1)
			sum2 += *(a + tmp);
	}
	printf("%d, %d\n", sum1, sum2);
}
