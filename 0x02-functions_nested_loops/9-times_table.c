#include "main.h"

/**
 * times_table - checks if character is in lower case
 *
 * Description: 'the program's description'
 *
 * Return: Always 1 or 0 (Success)
 */

void times_table(void)
{
	int a;
	int b;
	int ans;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			ans = a * b;
			_putchar((ans / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(44);
			_putchar(32);
		}
		_putchar('\n');
	}
}
