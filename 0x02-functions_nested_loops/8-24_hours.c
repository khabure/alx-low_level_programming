#include "main.h"

/**
 * jack_bauer - checks if character is in lower case
 *
 * Description: 'the program's description'
 *
 * Return: Always 1 or 0 (Success)
 */

void jack_bauer(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 0; a <= 2; a++)
	{
		for (b = 0; b <= 9 && (10 * a + b) <= 24; b++)
		{
			for (c = 0; c <= 6; c++)
			{
				for (d = 0; d <= 9; d++)
				{
					_putchar(a + 48);
					_putchar(b + 48);
					_putchar(58);
					_putchar(c + 48);
					_putchar(d + 48);
					_putchar('\n');
				}
			}
		}
	}
}
