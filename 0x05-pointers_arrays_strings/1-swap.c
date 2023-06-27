#include "main.h"

/**
 * swap_int - this function swaps the values of two integers.
 * @a: - pointer to a
 * @b: - pointer to b
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
