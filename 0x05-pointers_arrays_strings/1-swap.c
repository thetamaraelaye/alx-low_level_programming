#include "main.h"

/**
 * swap_int - swaps the values of two integers using pointers
 * @a: first integer.
 * @b: second integer.
 * Return: no return.
 */
void swap_int(int *a, int *b)
{
	int r = *a;
	*a = *b;
	*b = r;
}
