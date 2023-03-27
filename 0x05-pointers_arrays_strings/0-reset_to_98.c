#include "main.h"

/**
 * reset_to_98 - takes pointer and updates the value it points to to 98
 * @n: integer to be reset
 * Return: Always 0.
 */

void reset_to_98(int *n)
{
	int i = 98;

	n = &i;

	return (0);
}
