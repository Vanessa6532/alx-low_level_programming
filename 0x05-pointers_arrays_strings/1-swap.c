#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: integer that is supposed to be swapped
 * @b: integer that is supposed to be swapped
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}

