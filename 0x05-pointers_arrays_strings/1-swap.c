#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap the integers
 * @a: first int
 * @b: second int
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int *c = a;
	a = b;
	b = c;
}
