#include "main.h"
/**
 * swap_int-swaps 2 intergers
 * @a : variable
 * @b : variable
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int num;

	num = *a;
	*a = *b;
	*b = num;
}
