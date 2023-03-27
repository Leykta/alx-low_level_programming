#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @*a: a parameter
 * @*b: a parameter
 *
 * Description: swaps the value  of two integers
 * returns nothing
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
