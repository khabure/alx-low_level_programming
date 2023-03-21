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
	char str[] = "abcdefghijklmnopqrstuvwxyz\n";
	int n;

	for (n = 0; n < 9; n++)
	{
		_putchar(str[n]);
	}
	return (0);
}
