#include "main.h"

/**
 * print_diagonal - draw a diagonal
 * @n: number of \ printed
 */

void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(92);
		_putchar('\n');
		int j;

		for (j = 0; j < i; j++)
		{
			_putchar(32);
		}
	}
}
