#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int print_alphabet(void)
{
	int i;

	for (i = 97; i < 122; 1++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
