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
	int i, j;

	i = 0;

	while (i < 24)
	{
		j = 0;
		while (j < 60)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
			j++;
		}		
	i++;
	}
}
