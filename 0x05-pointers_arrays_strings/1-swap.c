#include "main.h"

/**
 * swap_int- Swaps values of inputs
 * @a: Input integer
 * @b: Input integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
