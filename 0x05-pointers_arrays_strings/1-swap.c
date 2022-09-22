#include "main.h"

/**
 * swap_int - swaps the values of two
 * @a: inter to swap
 * @b: inter to swap
 * **/

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
