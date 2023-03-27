#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers.
 * @a: input array.
 * @n: input n elements
 * Return: no return.
 */
void print_array(int *a, int n)
{
	int tmp = 0;

	for (; tmp < n; tmp++)
	{
		printf("%d", *(a + tmp));
		if (tmp != (n - 1))
			printf(", ");
	}
	printf("\n");
}
