#include "main.h"

/**
 * print_triangle - check the code
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	int i;

		for (i = 1; i <= size; i++)
		{
			int spaces = size - i;
			int j, k;

			for (j = 0; j < spaces; j++)
			{
				_putchar(32);
			}
			for (k = 0; k < i; k++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
