#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet 10 times
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz\n";
	int n;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n <= 26; n++)
		{
		_putchar(str[n]);
		}
	}
}
