#include "main.h"

/**
 * print_to_98 - checks if character is in lower case
 *
 * Description: 'the program's description'
 *
 * @n: the inputed character
 * Return: Always 1 or 0 (Success)
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i <= 97; i++)
	{
		if (i > 9)
		{
		_putchar((i / 10) + '0');
		}
		_putchar((i % 10) + '0');
		_putchar(44);
		_puchar(32);
	}
	_putchar((98 / 10) + '0');
	_puchar((98 % 10) + '0');
}
