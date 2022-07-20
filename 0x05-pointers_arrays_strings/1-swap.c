#include "main.h"

/**
* swap_int - Swaps the values of 2 given variables
* @a: Variable 1
* @b: Variable 2
*/
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
